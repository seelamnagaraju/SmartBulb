/**
  * @}
  */
/************************ prologue *****************************************/
//
//!    FILE:   SmartBulb.c
//!
//!    TITLE:  Smart Bulb Project
//!
//!    Author: Nagaraju   &   HARAN
//!
//!    Assignment : SMART BULB CTRL PROJECT
//!
//!    Date: 07/18/2020 PST
//!
//!    Latest Modification:: D:09/22/2021 T:0815PM 
//!
//!    Objective:  Smart bulb controlling system
//
/***************************************************************************/
/**
  * @}
  */
//
/* Includes ---------------------------------------------------*/
#include "main.h"

/* Private define ---------------------------------------------*/
#define MAX_ADC_VALUE 4095 //max ADC value used in time delay

#define PERIOD_1SEC   1000000    //   1 second
#define PERIOD_2SEC   2000000    //   2 second
#define PERIOD_1_5SEC  1500000   // 1.5 second
#define PERIOD_0_5SEC  500000    // 0.5 second
#define PERIOD_0_25SEC 250000    // 0.25 second

#define XINT1_CYCLE_CNT    1


#define PROGRAM_SMARTBULB     101
#define PROGRAM_ADC_READ      102
#define PROGRAM_TEST          103
#define PROGRAM_SERIAL_DEBUG  104


/* Private define ---------------------------------------------*/

#define _TEST_    1

#ifdef _TEST_
#define PERIOD_COOL_DOWN   60  // 2Min
#else
#define PERIOD_COOL_DOWN   120 // 2Min
#endif


/* Private typedef --------------------------------------------*/
eLedState SmartBulbStatus;
int coolDownCnt, coolDown_f, powerOn_f;

/* Global variables -------------------------------------------*/
volatile int toggleCount = 0;
char HwVersionNumber[32]="ver: 001_Test";
char SwVersionNumber[32]="ver: 001_Test";

unsigned long WakeCount;

/* Private variables ------------------------------------------*/
Uint16 LoopCount, ErrorCount;
Uint16 g_ConfigSel;
Uint32 tempareture, temp;
Uint16 i,j, DutyFine, n,update;

char BlinkRate, BlinkRateCnt;
char ReceivedChar, cycle;
float BlinkRate_Hz;

extern volatile struct XINTRUPT_REGS XIntruptRegs;
extern volatile Uint16 xint1Counter;   //this variable records latency counts from interrupt event to ISR
extern volatile Uint16 xint1Cycle;     //this variable cycles every 3 counts

/* Private Functions ------------------------------------------*/
void Variable_Init(void);
void InitDevice(void);
void InitApp(void);
Uint16 Get_Xint1Cycle(void);
void LED_BlinkRateSet(char iVal);

void SmartBulb_main(void);
void AdcRead(void);
void AdcRead_main(void);
void testFuntionality(void);



/* ISR Function Prototypes -----------------------------------*/
interrupt void XINT1_ISR(void); // XINT1_ISR - INT1.4
interrupt void TINT0_ISR(void); // TIMER0_ISR - CPU-Timer0
interrupt void INT13_ISR(void); // INT13_ISR - INT13 or CPU-Timer1
interrupt void INT14_ISR(void); // INT14_ISR - INT14 or CPU-Timer2


/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void main(void)
{
    int localVar=0;
    InitDevice();
    InitApp();
    Variable_Init(); // variable initialization

    g_ConfigSel=PROGRAM_SMARTBULB; // PROGRAM_TEST;

    for (localVar=0; localVar<1000; localVar++);

    while(1)
    {
        switch(g_ConfigSel)
        {
             case PROGRAM_SMARTBULB:
                 SmartBulb_main();
                 break;

             case PROGRAM_ADC_READ:
                 AdcRead_main();
                 break;

             case PROGRAM_TEST:
                 testFuntionality();
                 break;

             default:
                 while(1) {
                     WatchDogRefresh();
                     LoopCount++;
                     //break;
                 }
        } // end of switch

    }//end of while forever

} // end of main

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void testFuntionality(void)
{
    while(1) {
        WatchDogRefresh();
        LoopCount++;
        //break;
    }
}


/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void SmartBulb_main(void)
{
    while(1)
    {
        // Get user Command
        sciA_TxmtString("\r\nEnter Command: \0");
        ReceivedChar = sciA_RecvByte();

        // Echo Command
        sciA_TxmtString("   Your Command: \0");
        sciA_TxmtByte(ReceivedChar);
        LED_BlinkRateSet(ReceivedChar);
        ReceivedChar = 0xFF;

        AdcRead();
        WatchDogRefresh();
        LoopCount++;
    }
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void AdcRead_main(void)
{
    while(1)
    {
        AdcRead();
        WatchDogRefresh();
        LoopCount++;
    }
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void AdcRead(void)
{
    //Read ADC
     ConvertTemp();
     tempareture = GetTempRawData();
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void Variable_Init(void)
{
     LoopCount = 0;
     ErrorCount = 0;
     cycle = 0;
     BlinkRate=0;
     BlinkRateCnt=0;
     BlinkRate_Hz=0;
     coolDown_f=0;
     coolDownCnt=0;
     powerOn_f=1;
     SmartBulbStatus=LED_OFF;
     tempareture=0;
     WakeCount=0;
     return;
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void LED_BlinkRateSet(char iVal)
{
    char sysResponce=1;
    char lArr[16] = {0};

    if(coolDown_f) return; // return when cool down on

    BlinkRate = iVal;
    if (BlinkRate == '+')
    {
        if(BlinkRateCnt <= 4) BlinkRateCnt++;
        BlinkRate = BlinkRateCnt;
    }
    else if (BlinkRate == '-')
    {
        if(BlinkRateCnt >= 1) BlinkRateCnt--;
        BlinkRate = BlinkRateCnt;
    }

    SmartBulbStatus=LED_ON;

    switch (BlinkRate)
    {
        case 0:
        case 'a':
        {
            BlinkRate=BlinkRateCnt=0;          //  LED OFF
            SmartBulbStatus=LED_OFF;
            BlinkRate_Hz = 0.00;
            LED_Ctrl(RED_LED, LED_OFF);
            break;
        }
        case 5:
        case 'b':
        {
            BlinkRate=BlinkRateCnt=5;
            BlinkRate_Hz = 0.25;
            ConfigCpuTimer(&CpuTimer0, 90, PERIOD_2SEC); //   2 second
            break;
        }
        case 4:
        case 'c':
        {
            BlinkRate=BlinkRateCnt=4;
            BlinkRate_Hz = 0.33;
            ConfigCpuTimer(&CpuTimer0, 90, PERIOD_1_5SEC); // 1.5 second
            break;
        }
        case 3:
        case 'd':
        {
            BlinkRate=BlinkRateCnt=3;
            BlinkRate_Hz = 0.5;
            ConfigCpuTimer(&CpuTimer0, 90, PERIOD_1SEC); //   1 second
            break;
        }
        case 2:
        case 'e':
        {
            BlinkRate=BlinkRateCnt=2;
            BlinkRate_Hz = 1.00;
            ConfigCpuTimer(&CpuTimer0, 90, PERIOD_0_5SEC); //   .5 second
            break;
        }
        case 1:
        case 'f':
        {
            BlinkRate=BlinkRateCnt=1;
            BlinkRate_Hz = 2.00;
            ConfigCpuTimer(&CpuTimer0, 90, PERIOD_0_25SEC); //   .25 second
            break;
        }
        case 'r':
        {
            sysResponce=0;
            u_ftoa(BlinkRate_Hz, lArr, 2);
            sciA_TxmtString("\n\rLED BLINK RATE : ");
            if(BlinkRate_Hz < 1) sciA_TxmtByte('0');
            sciA_TxmtString(lArr);
            sciA_TxmtString(" Hz\n\r");
            break;
        }
        case 's':
        {
             // STATISTICS
             sciA_TxmtString("\n\rSTATISTICS Functionality!\n\r");
             if ( SmartBulbStatus==LED_ON )
             {
                 sciA_TxmtString("SMART BULB IS ON!\n\r");
             }
             else
             {
                 sciA_TxmtString("SMART BULB IS OFF!\n\r");
             }
             if(coolDown_f)
             {
                 sciA_TxmtString("COOL DOWN Functionality Running!\n\r");
             }
             break;
         }

         default :
            break;
    }

    // System responds with the frequency
    if(sysResponce)
    {
        coolDownCnt=0;

        u_ftoa(BlinkRate_Hz, lArr, 2);
        sciA_TxmtString("\n\rLED BLINK RATE : ");
        if(BlinkRate_Hz < 1) sciA_TxmtByte('0');
        sciA_TxmtString(lArr);
        sciA_TxmtString(" Hz\n\r");
    }
    return;
}


/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void InitApp(void)
{
    LED_Ctrl(RED_LED, LED_OFF);
    LED_Ctrl(BLUE_LED, LED_OFF);
    sciA_TxmtString("\r\n\n\nSMART BULB CTRL!\0");
    sciA_TxmtString(SwVersionNumber);
    return;
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void InitDevice(void)
{
      // Initialize System Control:
      InitSysCtrl();

      // Initalize GPIO:
      InitGpio();
      InitXint1();

      // Initalize GPIO pins for SCI-A port.
      InitSciaGpio();

      // Clear all interrupts/Disable CPU interrupts initialize PIE vector table:
      DINT;

      // Initialize PIE control registers to their default state.
      InitPieCtrl();

      // Disable CPU interrupts and clear all CPU interrupt flags
      IER = 0x0000;
      IFR = 0x0000;

      // Initialize the PIE vector table with pointers to the shell Interrupt Service Routines (ISR).
      InitPieVectTable();

      // Initialize all the Device Peripherals.
      //InitPeripherals(); // Need to develop

      // Initialize the Cpu Timers
      InitCpuTimers();

      // Configure CPU-Timer 0 to interrupt every 1 seconds(in uSeconds)
      ConfigCpuTimer(&CpuTimer0, 90, PERIOD_1SEC);

      // Configure CPU-Timer 1 to interrupt every 1 seconds
      ConfigCpuTimer(&CpuTimer1, 90, PERIOD_1SEC);

      // Configure CPU-Timer 2 to interrupt every 30 seconds
      //ConfigCpuTimer(&CpuTimer2, 90, 30*PERIOD_1SEC);

      // Initialize the SCI FIFO
      scia_fifo_init();

      // Initialize the SCI
      SCIa_Init();

      //Initialize the ADC
      InitAdc();
      StartTempSampling();
      Watchdog_Init();

      return;
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
interrupt void TINT0_ISR(void) // TINT0_ISR(void)
{
    // Insert ISR Code here
    CpuTimer0.InterruptCount++;

    // Toggle RED_LED
    if(BlinkRateCnt>0 && coolDown_f==0)
    {
        LED_Ctrl(RED_LED, LED_TOGGLE);  // LED_TOGGLE
    }

    // To receive more interrupts from this PIE group, acknowledge this interrupt
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}


interrupt void INT13_ISR(void) // TINT1_ISR(void)
{
    // Insert ISR Code here
    CpuTimer1.InterruptCount++;

    WatchDogRefresh();

    if ( SmartBulbStatus==LED_ON)
    {
        if(++coolDownCnt >= PERIOD_COOL_DOWN) // 2min
        {
            coolDownCnt=0;

            // Enable cool down
            coolDown_f++;

            // Toggle RED_LED once per 30Sec
            LED_Ctrl(RED_LED, LED_OFF); // LED_OFF
            SmartBulbStatus=LED_OFF; // update led status

            // Configure CPU-Timer 1 to interrupt every 30 seconds
            ConfigCpuTimer(&CpuTimer2, 90, 30*PERIOD_1SEC);

            sciA_TxmtString("\r\nSYSTEM COOL DOWN ENABLE!\r\n");
        }
    }
    else
    {
        if(++coolDownCnt >= PERIOD_COOL_DOWN) // 2min
            coolDownCnt=0;
    }

    // To receive more interrupts from this PIE group, acknowledge this interrupt
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}


interrupt void INT14_ISR(void) // TINT2_ISR(void)
{
    // Insert ISR Code here
    CpuTimer2.InterruptCount++;

    if ( coolDown_f > 0 )
    {
          // On RED_LED
          LED_Ctrl(RED_LED, LED_ON); // LED_OFF
          coolDown_f=0;
          SmartBulbStatus=LED_ON; // update led status
          sciA_TxmtString("\r\nWAKE UP FROM SYSTEM COOL DOWN!\r\n");
    }

    // To receive more interrupts from this PIE group, acknowledge this interrupt
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}
//----------------------------------------------------------------------------
interrupt void XINT1_ISR(void)  // XINT1_ISR - INT1.4
{
    // Insert ISR Code here
    xint1Counter = XIntruptRegs.XINT1CTR;   //capture the count

    //if (++xint1Cycle >= XINT1_CYCLE_CNT)    xint1Cycle = 0;

    // Serve Ext Intrpt: PANIC BUTTON pressed, the unit stops the blinking.
    sciA_TxmtString("\r\nUNIT STOPPED BY PANIC BUTTON!\r\n");
    ReceivedChar='a';
    LED_BlinkRateSet(ReceivedChar);

    // To receive more interrupts from this PIE group, acknowledge this interrupt
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}
//----------------------------------------------------------------------------
Uint16 Get_Xint1Cycle(void)
{
    return xint1Cycle;
}


//*****************@ End of file @********************************************

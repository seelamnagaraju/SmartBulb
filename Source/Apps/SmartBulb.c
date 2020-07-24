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
//!    Date: 07/18/2020
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

#define PERIOD_1SEC   1000000   //   1 second
#define PERIOD_2SEC   2000000   //   2 second
#define PERIOD_15SEC  1500000   // 1.5 second
#define PERIOD_05SEC  500000    //  .5 second
#define PERIOD_025SEC 250000    //  .25 second

#define PERIOD_1SEC   1000000   //   1 second
#define PERIOD_2SEC   2000000   //   2 second
#define PERIOD_15SEC  1500000   // 1.5 second
#define PERIOD_05SEC  500000    //  .5 second
#define PERIOD_025HZ  250000     // .25 second

/* Private typedef --------------------------------------------*/


/* Global variables -------------------------------------------*/
volatile int toggleCount = 0;
char HwVersionNumber[32]="ver: 001_Test";
char SwVersionNumber[32]="ver: 001_Test";

/* Private variables ------------------------------------------*/
static Uint16 tempCount;
Uint16 LoopCount;
Uint16 ErrorCount;
char BlinkRate, BlinkRateCnt;
char ReceivedChar, cycle;
float BlinkRate_Hz;

extern volatile struct XINTRUPT_REGS XIntruptRegs;
extern volatile Uint16 xint1Counter;   //this variable records latency counts from interrupt event to ISR
extern volatile Uint16 xint1Cycle;     //this variable cycles every 3 counts

/* Private Functions ------------------------------------------*/
void InitDevice(void);
void InitApp(void);
Uint16 Get_Xint1Cycle(void);
void LED_BlinkRateSet(char iVal);


/* ISR Function Prototypes -----------------------------------*/
interrupt void XINT1_ISR(void); // XINT1_ISR - INT1.4
interrupt void TINT0_ISR(void); // TIMER0_ISR - CPU-Timer0
interrupt void INT13_ISR(void); // INT13_ISR - INT13 or CPU-Timer1
interrupt void INT14_ISR(void); // INT14_ISR - INT14 or CPU-Timer2


/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void main(void)
{
    InitDevice();
    InitApp();

    // variable initialization
    LoopCount = 0;
    ErrorCount = 0;
    cycle = 0;
    BlinkRate=0;
    BlinkRateCnt=0;
    BlinkRate_Hz=0;


    for(;;)
    {
        sciA_TxmtString("\r\nEnter Command: \0");

        // Ext Intrpt test code
        //cycle = Get_Xint1Cycle();
        //LED_Ctrl(BLUE_LED, cycle);
        //while(1) {  Delay(1000); } // test

        // Get Command
        ReceivedChar = sciA_RecvByte();

        // Echo Command
        sciA_TxmtString("   Your Command: \0");
        sciA_TxmtByte(ReceivedChar);
        LED_BlinkRateSet(ReceivedChar);
        ReceivedChar = 0xFF;
        LoopCount++;
    }
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void LED_BlinkRateSet(char iVal)
{
    char sysResponce=1, lArr[16]=0;

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

    switch (BlinkRate)
    {
        case 0:
        case 'a':
        {
            BlinkRate=BlinkRateCnt=0;          //  LED OFF
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
            ConfigCpuTimer(&CpuTimer0, 90, PERIOD_15SEC); // 1.5 second
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
            ConfigCpuTimer(&CpuTimer0, 90, PERIOD_05SEC); //   .5 second
            break;
        }
        case 1:
        case 'f':
        {
            BlinkRate=BlinkRateCnt=1;
            BlinkRate_Hz = 2.00;
            ConfigCpuTimer(&CpuTimer0, 90, PERIOD_025SEC); //   .25 second
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
            break;
        }

         default :
            break;
    }

    // Sys responds with the frequency
    if(sysResponce)
    {
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
      //InitPeripherals();

      // Initialize the Cpu Timers
      InitCpuTimers();

      // Configure CPU-Timer 0 to interrupt every 500 milliseconds:
      // 90MHz CPU Freq, 100 millisecond Period (in uSeconds)
      ConfigCpuTimer(&CpuTimer0, 90, 5000000);
     // ConfigCpuTimer(&CpuTimer1, 90, 5000000);
     // ConfigCpuTimer(&CpuTimer2, 90, 5000000);

      // Initialize the SCI FIFO
      scia_fifo_init();
      // Initalize SCI for echoback
      SCIa_Init();

      return;
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
interrupt void TINT0_ISR(void)
{
    // Insert ISR Code here
    CpuTimer0.InterruptCount++;

    // Toggle BLUE_LED once per 500 milliseconds
    if(BlinkRateCnt>0)
    LED_Ctrl(BLUE_LED, LED_TOGGLE);

    // To receive more interrupts from this PIE group, acknowledge this interrupt
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}
interrupt void INT13_ISR(void) // TINT1_ISR(void)
{
    // Insert ISR Code here
    CpuTimer1.InterruptCount++;

    // Toggle RED_LED once per 500 milliseconds
    //LED_Ctrl(RED_LED, LED_TOGGLE); // LED_ON

    // To receive more interrupts from this PIE group, acknowledge this interrupt
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}
interrupt void INT14_ISR(void) // TINT2_ISR(void)
{
    // Insert ISR Code here
    CpuTimer2.InterruptCount++;

    // Toggle BLUE_LED once per 500 milliseconds
    LED_Ctrl(RED_LED, LED_TOGGLE); // LED_OFF

    // To receive more interrupts from this PIE group, acknowledge this interrupt
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}
//----------------------------------------------------------------------------
interrupt void XINT1_ISR(void)  // XINT1_ISR - INT1.4
{
    // Insert ISR Code here
    xint1Counter = XIntruptRegs.XINT1CTR;   //capture the count

    if (++xint1Cycle >= 3) // XINT1_CYCLE=3
    {
        xint1Cycle = 0;
    }

    // Acknowledge this interrupt to service next interrupt from group 1
    // Must use the mask value, don't use bit value b/c of read-modify-write effect
    // To receive more interrupts from this PIE group, acknowledge this interrupt
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}
//----------------------------------------------------------------------------
Uint16 Get_Xint1Cycle(void)
{
    return xint1Cycle;
}


//*****************@ End of file @********************************************


//###########################################################################
//
// FILE:   Example_2806xScia_Echoback.c
//
// TITLE:  SCI Echo Back Example
//!
//!  This test receives and echo-backs data through the SCI-A port.
//!
//
//###########################################################################
//
// Included Files
//
#include <math.h>
#include "DSP28x_Project.h"     // Device Headerfile and Examples Include File
#include "Delay.h"
#include "gpio.h"
#include "sci.h"
#include "utils.h"

#define PERIOD_1SEC   1000000   //   1 second
#define PERIOD_2SEC   2000000   //   2 second
#define PERIOD_15SEC  1500000   // 1.5 second
#define PERIOD_05SEC  500000    //  .5 second
#define PERIOD_025SEC 250000    //  .25 second

#define PERIOD_1SEC   1000000   //   1 second
#define PERIOD_2SEC   2000000   //   2 second
#define PERIOD_15SEC  1500000   // 1.5 second
#define PERIOD_05SEC  500000    //  .5 second
#define PERIOD_025HZ 250000    //  .25 second

// Globals Variables
Uint16 LoopCount;
Uint16 ErrorCount;
char BlinkRate, BlinkRateCnt;
char ReceivedChar, cycle;
float BlinkRate_Hz;

extern volatile struct XINTRUPT_REGS XIntruptRegs;
extern volatile Uint16 xint1Counter;   //this variable records latency counts from interrupt event to ISR
extern volatile Uint16 xint1Cycle;     //this variable cycles every 3 counts

// Function Prototypes statements for functions found within this file.
interrupt void XINT1_ISR(void);  // XINT1_ISR - INT1.4
interrupt void TINT0_ISR(void);
interrupt void INT13_ISR(void); // INT13_ISR - INT13 or CPU-Timer1
interrupt void INT14_ISR(void); // INT14_ISR - INT14 or CPU-Timer2

void InitDevice(void);
void InitApp(void);
Uint16 Get_Xint1Cycle(void);
void LED_BlinkRateSet(char iVal);


//***************** Main ********************************************
void main(void)
{
    char *msg;

    InitDevice();
    InitApp();

//  for(;;); // for testing

    // Step 5. User specific code
    LoopCount = 0;
    ErrorCount = 0;
    cycle = 0;
    BlinkRate=0;
    BlinkRateCnt=0;
    BlinkRate_Hz=0;

    char pBuffer1="test1";
    char pBuffer2="test2";
    cycle=s_strncmp(pBuffer1, pBuffer2, 4);

    sciA_TxmtString("\r\n\n\nHello World!\0");
    sciA_TxmtString("\r\nYou will enter a character, and the DSP will echo it back! \n\0");

    LED_Ctrl(RED_LED, LED_OFF);
    LED_Ctrl(BLUE_LED, LED_OFF);

    for(;;)
    {
        msg = "\r\nEnter a character: \0";
        sciA_TxmtString(msg);

        //cycle = Get_Xint1Cycle();
        //LED_Ctrl(BLUE_LED, cycle); // LED_TOGGLE);

        //while(1) {  Delay(1000);  }

        // Get character
        ReceivedChar = sciA_RecvByte();

        // Echo character back
        msg = "    You sent: \0";
        sciA_TxmtString(msg);
        sciA_TxmtByte(ReceivedChar);

        LED_BlinkRateSet(ReceivedChar);

        ReceivedChar = 0xFF;

        /*
        if (ReceivedChar=='y') {
            //ConfigCpuTimer(&CpuTimer1, 90, 2000000);
            LED_Ctrl(RED_LED, LED_ON);
            //LED_Ctrl(BLUE_LED, LED_TOGGLE);
        }
        else {
            LED_Ctrl(RED_LED, LED_OFF);
        }*/

        LoopCount++;
    }
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void LED_BlinkRateSet(char iVal)
{
    char lArr[16]='NULL';

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
            BlinkRate=BlinkRateCnt=0;
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
        //case 6:
        case 'r':
        {
            u_ftoa(BlinkRate_Hz, lArr, 2);
            sciA_TxmtString("\n\rLED BLINK RATE : ");
            if(BlinkRate_Hz < 1) sciA_TxmtByte('0');
            sciA_TxmtString(lArr);
            sciA_TxmtString(" Hz\n\r");
            //blink-rate, which is returned as 0Hz
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
}


/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void InitApp(void)
{

}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void InitDevice(void)
{
      // Step 1. Initialize System Control:
      // PLL, WatchDog, enable Peripheral Clocks
      // This example function is found in the F2806x_SysCtrl.c file.
      InitSysCtrl();

      // Step 2. Initalize GPIO:
      // This example function is found in the F2806x_Gpio.c file and
      // illustrates how to set the GPIO to its default state.
      InitGpio(); // Skipped for this example
      InitXint1();

      // For this example, only init the pins for the SCI-A port.
      // This function is found in the F2806x_Sci.c file.
      InitSciaGpio();

      // Step 3. Clear all interrupts and initialize PIE vector table:
      // Disable CPU interrupts
      DINT;

      // Initialize PIE control registers to their default state.
      // The default state is all PIE interrupts disabled and flags
      // are cleared.
      // This function is found in the F2806x_PieCtrl.c file.
      InitPieCtrl();

      // Disable CPU interrupts and clear all CPU interrupt flags
      IER = 0x0000;
      IFR = 0x0000;

      // Initialize the PIE vector table with pointers to the shell Interrupt
      // Service Routines (ISR).
      // This will populate the entire table, even if the interrupt
      // is not used in this example.  This is useful for debug purposes.
      // The shell ISR routines are found in F2806x_DefaultIsr.c.
      // This function is found in F2806x_PieVect.c.
      InitPieVectTable();

      // Step 4. Initialize all the Device Peripherals. :: F2806x_InitPeripherals.c
      //InitPeripherals(); // Not required for this example
      InitCpuTimers();   // For this example, only initialize the Cpu Timers

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


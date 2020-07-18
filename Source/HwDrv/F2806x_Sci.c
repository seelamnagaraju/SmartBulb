//###########################################################################
//
// FILE:	F2806x_Sci.c
//
// TITLE:	F2806x SCI Initialization & Support Functions.
//
//###########################################################################
//
// Included Files
//
#include "F2806x_Gpio.h"
#include "F2806x_Sci.h"          // F2806x Headerfile Include File

/****************************************************
 * variable declaration
 ****************************************************/
extern volatile struct GPIO_CTRL_REGS GpioCtrlRegs;
extern volatile struct GPIO_DATA_REGS GpioDataRegs;
extern volatile struct GPIO_INT_REGS GpioIntRegs;

void InitSciaGpio();
//
// InitSci - This function initializes the SCI(s) to a known state.
//
void
InitSci(void)
{
    //
	// Initialize SCI-A/B:
    //
}

//
// InitSciGpio - This function initializes GPIO pins to function as SCI pins
//
// Each GPIO pin can be configured as a GPIO pin or up to 3 different
// peripheral functional pins. By default all pins come up as GPIO
// inputs after reset.
//
// Caution:
// Only one GPIO pin should be enabled for SCITXDA/B operation.
// Only one GPIO pin shoudl be enabled for SCIRXDA/B operation.
// Comment out other unwanted lines.
//
void
InitSciGpio()
{
       InitSciaGpio();
}

//
// InitSciaGpio - 
//
void
InitSciaGpio()
{
    EALLOW;

    // Enable internal pull-up for the selected pins
    // Pull-ups can be enabled or disabled disabled by the user.
    // This will enable the pullups for the specified pins.
    GpioCtrlRegs.GPAPUD.bit.GPIO28 = 0;  // Enable pull-up for GPIO28 (SCIRXDA)
    GpioCtrlRegs.GPAPUD.bit.GPIO29 = 0;	 // Enable pull-up for GPIO29 (SCITXDA)

    // Set qualification for selected pins to asynch only
    // Inputs are synchronized to SYSCLKOUT by default.
    // This will select asynch (no qualification) for the selected pins.
    GpioCtrlRegs.GPAQSEL2.bit.GPIO28 = 3;  // Asynch input GPIO28 (SCIRXDA)
    
    // Configure GPIO28 for SCIRXDA operation
    GpioCtrlRegs.GPAMUX2.bit.GPIO28 = 1;
    
    // Configure GPIO29 for SCITXDA operation
    GpioCtrlRegs.GPAMUX2.bit.GPIO29 = 1;
    
    EDIS;
}



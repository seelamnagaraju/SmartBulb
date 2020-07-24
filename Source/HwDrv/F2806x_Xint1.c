/****************************************************************************************
 * Copyright:  	GoldenMaple Technologies (C) 2016
 * Project:		EECS X497.34 Course Project
 * File Name:	F2806x_Xint.c
 * Description:	F2806x Device External Interrupt 1 Driver Functions
 * Language:    TI TMS320F2806x C
 * Author:		Louis Zhu
 * Created:		12/15/2014
 * Notes:
 * Mod History: V1.0: Initial version developed on F28069ControlStick platform
 * 				V1.1: Modified for LaunchXL-F28069M LaunchPad
 ****************************************************************************************/

#include "F2806x_Gpio.h"
#include "F2806x_XIntrupt.h"
#include "F2806x_PieCtrl.h"
#include "F2806x_Device.h"

/****************************************************
 * #pragma section
 ****************************************************/
#pragma DATA_SECTION(XIntruptRegs, "XIntruptRegsFile");


/****************************************************
 * variable declaration
 ****************************************************/
extern volatile struct XINTRUPT_REGS XIntruptRegs;

volatile Uint16 xint1Counter;	//this variable records latency counts from interrupt event to ISR
volatile Uint16 xint1Cycle;		//this variable cycles every 3 counts

/*******************************************************************************************
 * Function: InitXint1
 *
 * Description: This function initializes XINT1 with GPIO19 as interrupt source
 *
 * Parameters: None
 *
 * Returns: None
 *
 * Special Notes:
 *
 *******************************************************************************************/
void InitXint1(void)
{
	EALLOW;			//don't forget protection
	GpioIntRegs.GPIOXINT1SEL.bit.GPIOSEL = GPIO19;   //choose GPIO19 as XINT1 source
	EDIS;

	//Add code to configure XINT1 for FE interrupt
	XIntruptRegs.XINT1CR.bit.POLARITY = XINT_FALLING_EDGE;

	//Add code to enable XINT1
	XIntruptRegs.XINT1CR.bit.ENABLE = 1;

	xint1Cycle = 0;
	xint1Counter = 0;
}

/*******************************************************************************************
 * Function: Xint1_ISR
 * ReDirected to F2806x_DefaultIsr.c File
 *******************************************************************************************/
/*
interrupt void Xint1_ISR(void)
{
	xint1Counter = XIntruptRegs.XINT1CTR;	//capture the count
	if (++xint1Cycle >= 3)  // XINT1_CYCLE=3
	{
		xint1Cycle = 0;
	}
	// Acknowledge this interrupt to service next interrupt from group 1
	// Must use the mask value, don't use bit value b/c of read-modify-write effect
	PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;

#ifdef _DEBUG
    asm (" ESTOP0");                        // Emulator Halt instruction for debug only
#endif
}
*/

//--- end of file -----------------------------------------------------

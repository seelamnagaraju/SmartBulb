/**
  ******************************************************************************
  * File Name          : watchdog.c
  * Date               : 07/18/2020 09:27:34
  * Description        : This file provides code for the configuration
  *                      of all used watchdog pins.
  ******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "watchdog.h"
#include "F2806x_Device.h"
#include "F2806x_PieCtrl.h"

// Function Prototypes
interrupt void WAKEINT_ISR(void);

extern unsigned long WakeCount;


//-----------------------------------------------------
void Watchdog_Init(void)
{
    // Connect the watchdog to the WAKEINT interrupt of the PIE
    // Write to the whole SCSR register to avoid clearing WDOVERRIDE bit
    EALLOW;
    SysCtrlRegs.SCSR = BIT1;
    //--------------------------
    // Reset the watchdog counter
    SysCtrlRegs.WDKEY = 0x0055;
    SysCtrlRegs.WDKEY = 0x00AA;
    //--------------------------
    // Enable the watchdog
    SysCtrlRegs.WDCR = 0x0028;
    EDIS;
}

// ServiceDog - This function resets the watchdog timer. Enable this function
// for using ServiceDog in the application
void WatchDogRefresh(void)
{
    EALLOW;
    // Reset the watchdog counter
    SysCtrlRegs.WDKEY = 0x0055;
    SysCtrlRegs.WDKEY = 0x00AA;
    EDIS;
}

// DisableDog - This function disables the watchdog timer.
void DisableDog(void)
{
    EALLOW;
    SysCtrlRegs.WDCR= 0x0068;
    EDIS;
}

// wakeint_isr ----------------------------------------------
interrupt void WAKEINT_ISR(void)
{
    WakeCount++;

    //
    // Acknowledge this interrupt to get more from group 1
    //
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}


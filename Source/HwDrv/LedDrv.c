//
// Created by IENKARAN ARASARATNAM on 4/19/20.
//

#include "F2806x_Device.h"
#include "F2806x_Gpio.h"
#include "LedDrv.h"


void DisplayD9(LedPatternEnum pattern)
{
    switch(pattern)
    {
    case LED_ON:
        GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
        break;

    case LED_BLINK:
        GpioDataRegs.GPBTOGGLE.bit.GPIO34 = 1;
        break;

    case LED_OFF:
    default:
        GpioDataRegs.GPBSET.bit.GPIO34 = 1;
        break;

    }
}


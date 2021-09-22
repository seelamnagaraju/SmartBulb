/**
  ******************************************************************************
  * File Name          : gpio.c
  * Date               : 07/18/2020 09:27:34
  * Description        : This file provides code for the configuration
  *                      of all used gpio pins.
  ******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"


/* GPIO pins:
   - GPIO1: P1_11 = GPIO1[11]
   - GPIO2: P1_29 = GPIO1[29]
*/

/*-----------------------------------------------------------*/
/* Sets the state of a board LEDs to on or off */
/*-----------------------------------------------------------*/
void LED_Ctrl(LED_TypeDef iLED, eLedState iState)
{
	switch (iLED)
	{
		case 1:
		{
		    LedRedCtrl(iState);
		    break;
		}
		case 2:
		{
		    LedBlueCtrl(iState);
            break;
		}

		case 3:
		{
			//if(iState) 	SMART_BULB_OFF
			//else	    	SMART_BULB_ON
			break;
		}
		case 4:
		{
			break;
		}
		
	    case 5:   // testing remove it 
		{
			break;
		}
		default :  
			break;
	}
}


//*****************@ End of file @********************************************

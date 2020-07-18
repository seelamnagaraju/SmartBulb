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
/*-----------------------------------------------------------*/
void GPIO_Init(void)
{
	
}

/*-----------------------------------------------------------*/
/* Sets the state of a board LEDs to on or off */
/*-----------------------------------------------------------*/
void LED_Ctrl(LED_TypeDef LED, State state)
{
	switch (LED)
	{
		case 1:
		{
			//if(state) 	RED_LED_OFF
			//else		RED_LED_ON
			break;
		}
		case 2:
		{
			//if(state) 	GREEN_LED_OFF
			//else		GREEN_LED_ON
			break;
		}
		case 3:
		{
			//if(state) 	BLUE_LED_OFF
			//else		BLUE_LED_ON
			break;
		}

		case 4:
		{
			//if(state) 	SMART_BULB_OFF
			//else		SMART_BULB_ON
			break;
		}
		case 5:
		{
			break;
		}
		default :
			break;
	}
}


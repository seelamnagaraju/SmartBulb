/**
  ******************************************************************************
  * File Name          : gpio.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for gpio  
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __gpio_H
#define __gpio_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "F2806x_Gpio.h"

/*  -------------------------------------------------------*/

 typedef enum
 {
 	INPUT_MODE  = 0,
 	OUTPUT_MODE = 1
 } GPIO_Mode;


typedef enum 
{  
	RED_LED     = 1,
	BLUE_LED    = 2,
	SMART_BULB  = 3,
	LCD_BCk_LED = 4
} LED_TypeDef;

typedef enum
{
  BUTTON_KEY1 = 0,
  BUTTON_KEY2 = 1,
  BUTTON_KEY3 = 2

} Button_TypeDef;

typedef enum 
{  
  BUTTON_MODE_GPIO = 0,
  BUTTON_MODE_EXTI = 1
} ButtonMode_TypeDef;    

typedef enum
{
	Rising_edge  = 0,
	Falling_edge = 1
} Interrupt_TypeDef;

/* Function prototypes -------------------------------------------------------*/
void LED_Ctrl(LED_TypeDef iLED, eLedState iState);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__gpio_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/





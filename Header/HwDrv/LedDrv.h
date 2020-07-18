/**
  ******************************************************************************
  * File Name          : LEDDRV.h
  * Date               : 07/17/2020 16:30:38
  * Description        : This file contains all the functions prototypes for led driver
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LEDDRV_H
#define __LEDDRV_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"

 typedef enum eLedPatternEnum
 {
     LED_OFF = 0,
     LED_ON,
     LED_BLINK
 }LedPatternEnum;

 void DisplayD9(LedPatternEnum pattern);


#ifdef __cplusplus
}

#endif
#endif /*__LEDDRV_H */

/**
  * @}
  */

/**
  * @}
  */

/************** END OF FILE *******************/

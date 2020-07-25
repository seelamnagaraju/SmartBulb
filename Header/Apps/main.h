/**
  ******************************************************************************
  * File Name          : main.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for main()
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* Standard library includes. */
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
*/

/* F28069M Library includes. */
#include "DSP28x_Project.h"
#include "F2806x_SysCtrl.h"
#include "F2806x_Gpio.h"
#include "F2806x_Cla_typedefs.h"
#include "F2806x_PieCtrl.h"
#include "F2806x_PieVect.h"
#include "F2806x_Adc.h"
#include "F2806x_Sci.h"

/* Demo includes. */
#include "adc.h"
#include "dac.h"
#include "delay.h"
#include "dma.h"
#include "gpio.h"
#include "i2c.h"
#include "pwm.h"
#include "sci.h"
#include "spi.h"
#include "TempMonitor.h"
#include "timer.h"
#include "watchdog.h"
#include "utils.h"

/* Exported types ------------------------------------------------------------*/
 typedef enum
 {
	 utFalse = 0,
	 utTrue  = 1,
 }t_bool;

/* Used as a loop counter to create a very crude delay. */
//#define 	NOP		__asm volatile( "NOP" );

/* Exported constants --------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/



#ifdef __cplusplus
}

#endif
#endif /* __MAIN_H */

/*****************************END OF FILE****/




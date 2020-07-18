/**
  ******************************************************************************
  * File Name          : timer.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for timer  
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __timer_H
#define __timer_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Function prototypes -------------------------------------------------------*/
void Timer_Init (void);
unsigned char Timer_start (void);
unsigned char Timer_stop (void);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__timer_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/

/**
  ******************************************************************************
  * File Name          : watchdog.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for watchdog  
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __watchdog_H
#define __watchdog_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Function prototypes -------------------------------------------------------*/
void Watchdog_Init (void);
unsigned char Watchdog_start (void);
unsigned char Watchdog_stop (void);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__watchdog_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/

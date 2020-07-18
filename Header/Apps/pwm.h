/**
  ******************************************************************************
  * File Name          : pwm.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for pwm  
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __pwm_H
#define __pwm_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Function prototypes -------------------------------------------------------*/
void PWM_Init (void);
unsigned char PWM_set (unsigned int idata);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__pwm_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/

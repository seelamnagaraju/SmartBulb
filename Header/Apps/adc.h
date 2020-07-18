/**
  ******************************************************************************
  * File Name          : adc.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for adc  
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __adc_H
#define __adc_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Function prototypes -------------------------------------------------------*/
void ADC_Init (void);
unsigned int ADC_Read (unsigned char iChannel);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__adc_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/





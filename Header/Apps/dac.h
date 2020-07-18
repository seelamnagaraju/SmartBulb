/**
  ******************************************************************************
  * File Name          : dac.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for dac  
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __dac_H
#define __dac_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Function prototypes -------------------------------------------------------*/
void DAC_Init (void);
unsigned int DAC_Set (unsigned char iChannel);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__dac_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/

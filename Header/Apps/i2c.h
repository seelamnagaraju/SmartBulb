/**
  ******************************************************************************
  * File Name          : i2c.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for i2c  
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __i2c_H
#define __i2c_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Function prototypes -------------------------------------------------------*/
void I2C_Init (void);
unsigned char I2C_read (unsigned int iAddress);
unsigned char I2C_write (unsigned int iAddress, unsigned char idata);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__i2c_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/

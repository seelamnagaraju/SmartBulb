/**
  ******************************************************************************
  * File Name          : spi.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for spi  
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __spi_H
#define __spi_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Function prototypes -------------------------------------------------------*/
void SPI_Init (void);
unsigned char SPI_read (void);
unsigned char SPI_write (unsigned char iData);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__spi_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/

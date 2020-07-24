/**
  ******************************************************************************
  * File Name          : dma.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for dma
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __dma_H
#define __dma_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Function prototypes -------------------------------------------------------*/
void DMA_Init (void);
unsigned int DMA_Set (unsigned char iChannel);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__dma_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/

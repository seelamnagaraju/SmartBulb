/**
  ******************************************************************************
  * File Name          : sci.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for sci  
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __sci_H
#define __sci_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Function prototypes -------------------------------------------------------*/
void SCIa_Init (void);
unsigned char SCIa_read (void);
unsigned char SCIa_write (unsigned char iData);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__sci_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/

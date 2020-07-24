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
void sciA_TxmtByte(unsigned char iData);
unsigned char sciA_RecvByte(void);
void sciA_TxmtString(char * iString);
unsigned char * sciA_RecvString(unsigned char iNum);

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

/**
  ******************************************************************************
  * File Name          : delay.c
  * Date               : 07/18/2020 09:27:34
  * Description        : This file provides code for delay
  *                 
  ******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "delay.h"

void Delay(unsigned int iCount)
{
    volatile int i=0;
    volatile int j=0;
    for (i=0; i<iCount; i++)
    {
        for (j=0; j<5000; j++) {}
    }

}


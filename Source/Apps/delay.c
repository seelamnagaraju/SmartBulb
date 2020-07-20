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
    while (--iCount)
    {
        for (i=0; i<5000; i++) {}
    }
}

/*
void Delay_usec(unsigned int iDel) // delay_ in micro-seconds
{
    volatile char y=0;
    while(--iDel)
    {
        for(y=0; y<5; y++);
    }
}
*/




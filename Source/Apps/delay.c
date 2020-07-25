/**
  ***************************************************************************
  * File Name          : delay.c
  * Date               : 07/18/2020 09:27:34
  * Description        : This file provides code for delay
  *                 
  ***************************************************************************/

/* Includes ----------------------------------------------------------------*/
#include "delay.h"


/*****************************************************************************
** Function name:       Delay
** Description  :       Delay function
** parameters:          @arg1- is the delay time
                        @arg2-
** Returned value:      None
*****************************************************************************/
void Delay(unsigned int iCount)
{
    volatile int i=0;
    volatile int j=0;
    for (i=0; i<iCount; i++)
    {
        for (j=0; j<5000; j++) {}
    }
    //WD_Refresh(); // watchdog refresh
}

/*
void dly_usec(unsigned int del) // delay_ in micro-seconds
{
    volatile int i=0;
    while(--del)
    {
        for(i=0; y<i; i++);
        //WD_Refresh(); // watchdog refresh
    }
}
 */

//*****************@ End of file @*******************************************//


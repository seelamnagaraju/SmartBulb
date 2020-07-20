/**
  * @}
  */
/************************************************************/
/************************ prologue **************************/
/*                                                          */
/* Real-time Operating Systems Programming                  */
/*                                                          */
/* Author: Nagaraju   &   HARAN                             */
/*                                                          */
/* Assignment : SMART BULB CTRL PRIJECT                     */
/*                                                          */
/*                                                          */
/* Date: 07/18/2020                                         */
/*                                                          */
/* Objective:  Smart bulb controlling system                */
/*                                                          */
/*                                                          */
/************************************************************/
/**
  * @}
  */
 /* Includes ------------------------------------------------*/
#include "main.h"

/* Private define -------------------------------------------*/
#define MAX_ADC_VALUE 4095 //max ADC value used in time delay

/* Private typedef ------------------------------------------*/


/* Global variables -----------------------------------------*/
volatile int toggleCount = 0;
char HwVersionNumber[32]="ver: 001_Test";
char SwVersionNumber[32]="ver: 001_Test";

/* Private variables ----------------------------------------*/
static Uint16 tempCount;

/* Private Functions -----------------------------------------*/
void InitDevice(void);
void InitApp(void);

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void main(void)
{
    InitDevice();
    InitApp();
    EnablePieInterrupts();

    while (1)
    {
        ConvertTemp();
        DisplayD9(LED_BLINK);
        tempCount = GetTempRawData();
        Delay(MAX_ADC_VALUE - tempCount);
        toggleCount += 1;
    }
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void InitDevice(void)
{
    InitSystemClock(CPU_80MHz);
    InitGpio();
    InitXint1();
    InitPieCtrl();
    InitPieVectTable();
    InitAdc();
}

/*------------------------------------------------------------*/
/*------------------------------------------------------------*/
void InitApp(void)
{
    StartTempSampling();
}


/*------------------------------------------------------------*/
/*------------------------------------------------------------*/

#include "F2806x_SysCtrl.h"
#include "F2806x_Gpio.h"
#include "LedDrv.h"
#include "F2806x_Xint1.h"
#include "F2806x_PieCtrl.h"
#include "F2806x_PieVect.h"
#include "F2806x_Adc.h"
#include "TempMonitor.h"

void Delay(int count);
void InitDevice(void);
void InitApp(void);

#define MAX_ADC_VALUE 4095 //max ADC value used in time delay

volatile int toggleCount = 0;

//--------------------------------------------------
void main(void)
{
    Uint16 tempCount;

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

void InitDevice(void)
{
    InitSystemClock(CPU_80MHz);
    InitGpio();
    InitXint1();
    InitPieCtrl();
    InitPieVectTable();
    InitAdc();
}

void Delay(int count)
{
    volatile int i=0;
    volatile int j=0;
    for (i=0; i<count; i++)
    {
        for (j=0; j<5000; j++) {}
    }

}

void InitApp(void)
{
    StartTempSampling();
}

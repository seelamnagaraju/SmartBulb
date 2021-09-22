/**
  ******************************************************************************
  * File Name          : adc.c
  * Date               : 07/18/2020 09:27:34
  * Description        : This file provides code for the configuration
  *                      of all used adc pins.
  ******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "adc.h"

/****************************************************
 * #pragma section
 ****************************************************/

/****************************************************
 * Variable Declaration
 ****************************************************/
TempDataStruct tempData;
static Uint16 aveTemp;

/****************************************************
 * Static Function Prototypes
 ****************************************************/

/*******************************************************************************************
 * Function: GetTempRawData
 *
 * Description: This function reads temperature ADC raw data
 *
 * Parameters: None
 *
 * Returns: Uint16
 *
 * Special Notes:
 *
 *******************************************************************************************/
Uint16 GetTempRawData(void)
{
    return aveTemp;
}

/*******************************************************************************************
 * Function: ADCINT1_ISR
 *
 * Description: This function serves ADCINT1 interrupts and saves sampling data to a buffer.
 *
 * Parameters: None
 *
 * Returns: None
 *
 * Special Notes:
 *     1 - PIE1.1 @ 0x000D40  ADCINT1
 *
 *******************************************************************************************/
interrupt void ADCINT1_ISR(void)
{
    Uint16 temp;
    //read raw data from ADCRESULT0 - ADCRESULT3 and assign the average of the sum of them to aveTemp

    temp = AdcResult.ADCRESULT0;
    temp += AdcResult.ADCRESULT1;
    temp += AdcResult.ADCRESULT2;
    temp += AdcResult.ADCRESULT3;
    aveTemp = temp >> 2;

    //ack interrupts
    AdcRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;       // Clear ADCINT1 flag
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;     // Must acknowledge the PIE group
}

/*******************************************************************************************
 * Function: ConvertTemp
 *
 * Description: This function reads temperature ADC raw data and converts it to deg C
 *
 * Parameters: None
 *
 * Returns: None
 *
 * Special Notes: Conversion from raw data to deg C:
 *  tempData.DegC = (float)(tempData.RawData - tempData.TempOffset)*tempData.TempSlope/FP_SCALE;
 *
 *******************************************************************************************/
void ConvertTemp(void)
{
    //add your code
    tempData.RawData = GetTempRawData();

    tempData.DegC = ((tempData.RawData - getTempOffset())*(Uint32)getTempSlope()
            + FP_ROUND + KELVIN_OFF)/FP_SCALE - KELVIN;
}
//--- end of file -----------------------------------------------------


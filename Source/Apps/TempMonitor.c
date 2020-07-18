#include "TempMonitor.h"
#include "F2806x_Adc.h"

/* #pragma section ******************************************************************/

/* Variable Declaration *************************************************************/
TempDataStruct tempData;

/* Static Function Prototypes *******************************************************/

/*******************************************************************************************
 * Function: ConvertTemp
 * Description: This function reads temperature ADC raw data and converts it to deg C
 * Parameters: None
 * Returns: None
 *  Special Notes: Conversion from raw data to deg C:
 * 	tempData.DegC = (float)(tempData.RawData - tempData.TempOffset)*tempData.TempSlope/FP_SCALE;
 *
 *******************************************************************************************/
void ConvertTemp(void)
{
	//add your code
    tempData.RawData = GetTempRawData();

    tempData.DegC = ((tempData.RawData - getTempOffset())*(Int32)getTempSlope()
            + FP_ROUND + KELVIN_OFF)/FP_SCALE - KELVIN;
}

/******************@ End of file @*********************************************************/


/****************************************************************************************
 * File Name:   F2806x_Temp.h
 * Description: F2806x Device Temperature Definitions
 * Language:    TI TMS320F2806x C
 * Author:
 * Created:     07/15/2020
 * Notes:
 * Mod History:
 *
 ****************************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef F2806x_TEMP_H
#define F2806x_TEMP_H

#include "F2806x_Device.h"

// Useful definitions
#define FP_SCALE 32768       //Scale factor for Q15 fixed point numbers (2^15)
#define FP_ROUND FP_SCALE/2  //Add to Q15 numbers before converting to integer to round the number

// Amount to add to Q15 fixed point numbers to shift from Celsius to Kelvin
// (Converting guarantees number is positive, which makes rounding more efficient)
#define KELVIN 273
#define KELVIN_OFF FP_SCALE*KELVIN


// The following pointers to function calls are:
//Slope of temperature sensor (deg. C / ADC code).  Stored in fixed point Q15 format.
  #define getTempSlope() (*(int (*)(void))0x3D7E82)()

//ADC code corresponding to temperature sensor output at 0 deg. C
  #define getTempOffset() (*(int (*)(void))0x3D7E85)()


//Temperature Data Struct
typedef struct tTempDataStruct
{
    unsigned short RawData;
    float DegC;
}TempDataStruct;

/*******************************************************************************************
 * Public function prototypes
 *******************************************************************************************/
void ConvertTemp(void);

#endif
//===========================================================================
// End of file.
//===========================================================================

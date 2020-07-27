/**
  ******************************************************************************
  * File Name          : adc.h
  * Date               : 07/18/2020 16:30:38
  * Description        : This file contains all the functions prototypes for adc  
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __adc_H
#define __adc_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "main.h"
#include "F2806x_Adc.h"

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
    Uint16 RawData;
    float DegC;
}TempDataStruct;

/*******************************************************************************************
 * Public function prototypes
 *******************************************************************************************/
void ConvertTemp(void);
Uint16 GetTempRawData(void);

/* Function prototypes -------------------------------------------------------*/
void ADC_Init (void);
unsigned int ADC_Read (unsigned char iChannel);

/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /*__adc_H */

/**
  * @}
  */

/**
  * @}
  */

/********************@ END OF FILE @**************************/


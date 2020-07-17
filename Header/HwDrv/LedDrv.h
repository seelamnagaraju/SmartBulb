//
// Created by IENKARAN ARASARATNAM on 4/19/20.
//

#ifndef LEDDRV_H
#define LEDDRV_H

typedef enum eLedPatternEnum
{
    LED_OFF = 0,
    LED_ON,
    LED_BLINK
}LedPatternEnum;

//void ToggleD9(LedPatternEnum pattern);

void DisplayD9(LedPatternEnum pattern);

#endif //SCRIPTS_LEDDRV_H

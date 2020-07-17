//
// Created by IENKARAN ARASARATNAM on 4/19/20.
//

#ifndef F2806X_DEVICE_H
#define F2806X_DEVICE_H

#define  Device_cal (void (*)(void))0x3D7C80

//Common CPU Definitions:
//
extern __cregister volatile unsigned int IFR;
extern __cregister volatile unsigned int IER;

#define EINT __asm(" clrc INTM")
#define DINT __asm(" setc INTM")
#define ERTM __asm(" clrc DBGM")
#define DRTM __asm(" setc DBGM")
#define EALLOW __asm(" EALLOW")
#define EDIS __asm(" EDIS")
#define ESTOP0 __asm(" ESTOP0")

#ifndef _TI_STD_TYPES
#define _TI_STD_TYPES
typedef int Int;
typedef unsigned Uns;
typedef char Char;
typedef char *String;
typedef void *Ptr;
typedef enum eBoolean {
    False = 0,
    True
}Bool;

typedef long    Int32;
typedef int     Int16;
typedef char    Int8;
#endif


typedef unsigned long Uint32;
typedef unsigned int Uint16;
typedef unsigned char Uint8;
typedef float Float32;
typedef long double Float64;

//--------------------------------------------------------------------------- // Global Function References
//
extern void DelayUs(Uint16);


#endif //SCRIPTS_F2806X_DEVICE_H

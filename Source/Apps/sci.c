/**
  ******************************************************************************
  * File Name          : sci.c
  * Date               : 07/18/2020 09:27:34
  * Description        : This file provides code for the configuration
  *                      of all used sci pins.
  ******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "sci.h"
#include "F2806x_Sci.h"

/* SCI-A pins:
 *   - SCI_A-RXD : GPIO28
 *   - SCI_A-TXD : GPIO29
 */

void sciA_TxmtByte(unsigned char iData)
{
    scia_xmit((int)iData);
}

void sciA_TxmtString(char * iString)
{
    int i;
    i = 0;
    while(iString[i] != '\0')
    {
        sciA_TxmtByte(iString[i]);
        i++;
    }
}

unsigned char sciA_RecvByte(void)
{
    unsigned char l_RecvByte;
    l_RecvByte = (unsigned char)scia_recv();
    return l_RecvByte;
}

/*
unsigned char * sciA_RecvString(unsigned char iNum)
{
    unsigned char * lRecvString;
    return * lRecvString;
}
*/


//*****************@ End of file @********************************************



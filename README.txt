# SmartBulb
Controller  :   TMS320F28069M
DateCreated :   07/17/2020

Peripherals:
--------------
LED
SWITCH

Drivers:
-------------
UART (serial communication Interface - SCI)
TIMER
EXT INTERRUPT
GPIO CTRL

RTOS FEATURES:
---------------
semaphores
message queue

============================================== 
A. GPT counter/timer 
B. PIT counter/timer.

#define BOARDTYPE 1      // for Board A GPT
// #define BOARDTYPE 2   // for Board B PIT
==============================================  
REQUIRED FUNCTIONTIONALITY
I.   INITIALIZATION: When the board powers-up the driver is initialized 

II.  BLINK RATE: The user can increase the blink-rate by sending the ‘+’ key.
There are five steps after ‘OFF:
a. OFF
b. Period = 4 seconds (2 seconds on and 2 seconds off or .25 Hz)
c. Period = 3 seconds (1.5 seconds on and 1.5 seconds off or .33 Hz)
d. Period = 2 seconds (1 second on and 1 second off or .5Hz)
e. Period = 1 second ( .5 second on and .5 second off or 1 Hz)
f. Period = .5 second (.250 second on and .250 second off or 2 Hz)

III.  BLINK RATE: The user can decrease the blink-rate by sending the ‘-‘ key. 
IV.   BLINK RATE: The user can directly specify the rate by sending an a, b, c, d, e or f from the console.
V.    BLINK RATE: Immediately after the user sends the +, -, a, b, c, d, e or f key, the unit responds with the frequency (i.e. 0Hz, .25Hz, .33Hz etcetera) to acknowledge the setting.
VI.   BLINK RATE: The user can send an ‘r’ key for the blink-rate, which is returned as 0Hz, .25Hz, .33Hz etcetera.
VII.  STATISTICS: The user can send an ‘s’ key for statistics.
VIII. COOL DOWN: Every 2 minutes the system must “cool down” for 30 seconds. The speed will be set to zero and the LED turned off. 
      After 30 seconds the speed will return to the speed last set.
IX.   PANIC BUTTON (USER): When the user button is pressed, the unit stops the blinking. 
      The unit sends a message to the user	 “UNIT STOPPED BY PANIC BUTTON\r\n”
	  
X. COMMAND LINE SUMMARY
+	Increment Speed by 1 step to max
-	Decrement Speed by 1 step until off
a	Turn blink off
b	Set blink to .25 Hz
c	Set blink to .33 Hz
d	Set blink to .5 Hz
e	Set blink to 1 Hz
f	Set blink to 2 Hz
r	Return rate to user
s	Return Statistics to user	  
	  
============================================== 
C FUNCTIONTIONALITIES:
-----------------------
loops
conditional stmts
switch stmts
structures
Arrays
pointers
Function Pointers
============================================== 

/*****************************************************************************
** Function name:		HWInitDriver
** Descriptions :		external INT handler
** parameters:			@arg1- is the board-type.
                        @arg2- pointer to FWCallBack()
** Returned value:		None
*****************************************************************************/
unsigned char HWInitDriver(unsigned char arg1, arg2)
{
   // Initialize the LED driver
   // LED is set to speed 0, off
}

/*****************************************************************************
** Function name :		HWSetSpeed
** Descriptions  :		Value of the speed to set.
** parameters    :		None
** Returned value:		None
*****************************************************************************/
unsigned char HWSetSpeed(unsigned char spd)
{
    stmts;
    return spd;  // speed requested and the speed set
}

===========================================================================
GPIO CONTROL REGISTERS:
GPACTRL 	0x6F80  GPIO A Control Register 			(GPIO0 to 31)
GPAQSEL1 	0x6F82  GPIO A Qualifier Select 1 Register 	(GPIO0 to 15)
GPAQSEL2 	0x6F84  GPIO A Qualifier Select 2 Register 	(GPIO16 to 31)
GPAMUX1 	0x6F86  GPIO A MUX 1 Register 				(GPIO0 to 15)
GPAMUX2 	0x6F88  GPIO A MUX 2 Register 				(GPIO16 to 31)
GPADIR 		0x6F8A  GPIO A Direction Register			(GPIO0 to 31)
GPAPUD 		0x6F8C  GPIO A Pullup Disable Register		(GPIO0 to 31)

GPBCTRL 	0x6F90  GPIO B Control Register 			(GPIO32 to 44)
GPBQSEL1 	0x6F92  GPIO B Qualifier Select 1 Register 	(GPIO32 to 44)
GPBMUX1 	0x6F96  GPIO B MUX 1 Register 				(GPIO32 to 44)
GPBMUX2 	0x6F98  GPIO B MUX 2 Register 				(GPIO50 to 58)  ***
GPBDIR 		0x6F9A  GPIO B Direction Register 			(GPIO32 to 44)
GPBPUD 		0x6F9C  GPIO B Pullup Disable Register 		(GPIO32 to 44)
---------------------------------------------------------------------------
GPIO DATA REGISTERS:
GPADAT 		0x6FC0  GPIO A Data Register 				(GPIO0 to 31)
GPASET 		0x6FC2  GPIO A Data Set Register 			(GPIO0 to 31)
GPACLEAR 	0x6FC4  GPIO A Data Clear Register 			(GPIO0 to 31)
GPATOGGLE 	0x6FC6  GPIO A Data Toggle Register			(GPIO0 to 31)
GPBDAT 		0x6FC8  GPIO B Data Register 				(GPIO32 to 44)
GPBSET 		0x6FCA  GPIO B Data Set Register 			(GPIO32 to 44)
GPBCLEAR 	0x6FCC  GPIO B Data Clear Register 			(GPIO32 to 44)
GPBTOGGLE 	0x6FCE  GPIO B Data Toggle Register 		(GPIO32 to 44)
-------------------------------------------------------------------------
AIODAT 		0x6FD8  Analog I/O Data Register 			(AIO0 to AIO15)
AIOSET 		0x6FDA  Analog I/O Data Set Register 		(AIO0 to AIO15)
AIOCLEAR 	0x6FDC  Analog I/O Data Clear Register 		(AIO0 to AIO15)
AIOTOGGLE 	0x6FDE  Analog I/O Data Toggle Register 	(AIO0 to AIO15)
-------------------------------------------------------------------------
GPIO INTERRUPT 
GPIOXINT1SEL 0x6FE0  XINT1 GPIO Input Select Register 	(GPIO0 to 31)
GPIOXINT2SEL 0x6FE1  XINT2 GPIO Input Select Register 	(GPIO0 to 31)
GPIOXINT3SEL 0x6FE2  XINT3 GPIO Input Select Register 	(GPIO0 to 31)
GPIOLPMSEL 	 0x6FE8  LPM   GPIO Select Register 		(GPIO0 to 31)
-------------------------------------------------------------------------





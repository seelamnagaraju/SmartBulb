# SmartBulb
Controller  :   TMS320F28069M
DateCreated :   07/17/2020
//---------------@ Enf of File @-------------------------------------//
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


//---------------@ Enf of File @----------------------------------------//


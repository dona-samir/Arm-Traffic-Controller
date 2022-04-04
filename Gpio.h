#include "tm4c123gh6pm.h"
extern int counter;


/*------------------------------------------------------------------------
    Initialization Port A.
    
    Precondition:  None.
    Postcondition: enable clock on port A and declare inputs & output pins we need from port A 
    PIN_2 for red light , PIN_3  for yellow light , PIN_4 for green light & these three pins are used for traffic 1
    PIN_5 for red light , PIN_6 for yellow light , PIN_7 for green light  & these three pins are used for traffic 2
    
 ------------------------------------------------------------------------*/
void portAInit(void);


/*------------------------------------------------------------------------
    Initialization Port D.
    
    Precondition:  None.
    Postcondition: enable clock on port D and declare inputs & declare the push button as outputs
    PIN_0 for red light , PIN_1  for green light & these 2 pins are used for pedistrians 1
    PIN_2 for red light , PIN_3 for green light & these 2 pins are used for pedistrians 2
    PIN_6 for push button_1 , PIN_7 for push button_2   
 ------------------------------------------------------------------------*/
void portDInit (void);
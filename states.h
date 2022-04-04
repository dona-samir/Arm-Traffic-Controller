#include "tm4c123gh6pm.h"

/*------------------------------------------------------------------------
    Turn off all LEDs  
    No inputs or outputs 
    Precondition: None
    Postcondition: Clear pins of Ports A & B
 ------------------------------------------------------------------------*/
void clear(void);

/*------------------------------------------------------------------------
    No inputs or outputs 
    Precondition: None
    Postcondition: Traffic 1 is Green, Pedistrian 1 is Red while 
    Traffic 2 is Red, Pedistrian 2 is Green
 ------------------------------------------------------------------------*/
void state_0 (void);


/*------------------------------------------------------------------------
    No inputs or outputs 
    Precondition: None
    Postcondition: Traffic 1 is Yellow, Pedistrian 1 is Red while 
    Traffic 2 is Red, Pedistrian 2 is Green 
 ------------------------------------------------------------------------*/
void state_1 (void);

/*------------------------------------------------------------------------
    No inputs or outputs 
    Precondition: None
    Postcondition: Traffic 1 is Red, Pedistrian 1 is Green while 
    Traffic 2 is Red, Pedistrian 2 is Green 
 ------------------------------------------------------------------------*/
void state_2 (void);

/*------------------------------------------------------------------------
    No inputs or outputs 
    Precondition: None
    Postcondition: Traffic 1 is Red, Pedistrian 1 is Green while 
    Traffic 2 is Green, Pedistrian 2 is Red 
 ------------------------------------------------------------------------*/
void state_3 (void);

/*------------------------------------------------------------------------
    No inputs or outputs 
    Precondition: None
    Postcondition: Traffic 1 is Red, Pedistrian 1 is Green while 
    Traffic 2 is Yellow, Pedistrian 2 is Red 
 ------------------------------------------------------------------------*/
void state_4 (void);

/*------------------------------------------------------------------------
     
    No inputs or outputs 
    Precondition: None
    Postcondition: Traffic 1 is Red, Pedistrian 1 is Green while 
    Traffic 2 is Red, Pedistrian 2 is Green 
 ------------------------------------------------------------------------*/
void state_5 (void);

/*------------------------------------------------------------------------
    No inputs or outputs 
    Precondition: None
    Postcondition: Traffic 1 is Red & Pedistrian 1 is Green
    Changes the colors of traffic 1 & pedistrian 1 only without affecting traffic 2 
 ------------------------------------------------------------------------*/
void Button_1(void);

/*------------------------------------------------------------------------
    No inputs or outputs 
    Precondition: None
    Postcondition: Traffic 2 is Red & Pedistrian 2 is Green 
   Changes the colors of traffic 2 & pedistrian 2 only without affecting traffic 1 
 ------------------------------------------------------------------------*/
void Button_2(void);

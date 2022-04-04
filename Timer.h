#include "tm4c123gh6pm.h"

extern int counter;
extern int state;

/*------------------------------------------------------------------------
    Traffic Lights Timer Initialization  
    No input's or outputs 
    Precondition:  None.
    Postcondition: Connect time zero with systick, conncect ISR with the FSM, then 
    enable the timer.Its a 32-bit timer, that counts down,
    that is periodic which means that it free running.
 ------------------------------------------------------------------------*/
void Timer0Init (void);

/*------------------------------------------------------------------------
    Pedestrians Timer when a button is pushed 
    No input's or outputs 
    Precondition:  None.
    Postcondition: Connect time one with systick, conncect ISR with the TimerInt, 
    then enable the timer,Its a 32-bit timer, that counts down,
    that is periodic which means that it free running.
 ------------------------------------------------------------------------*/
void Timer1Init ();

/*------------------------------------------------------------------------
    Delay function that takes timer base, and amount of delay in s 
    Inputs delay in seconds, Timer base
    Precondition:  None.
    Postcondition: Reload the timer with the needed delay & enables the timer to start the count
 ------------------------------------------------------------------------*/
void delay_s (uint32_t delay, uint32_t base);


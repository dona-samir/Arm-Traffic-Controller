/*------------------------------------------------------------------------
    Interuput Service Routine: Timer 0 timeout Handler  
    No inputs or outputs 
    Precondition:  None.
    Postcondition: Interputs are served, the Flag is pulled down, changes 
    the state when the time has finished, set up correct delay time for the 
    next state. 
 ------------------------------------------------------------------------*/
void FSM (void);


/*------------------------------------------------------------------------
    Interuput Service Routine: Timer 1 timeout Handler  
    No inputs or outputs 
    Precondition: None
    Postcondition: Resume the previous state after two seconds, returns the state
    which was before the button interrput and resume Timer 0.
 ------------------------------------------------------------------------*/
void FSM2 (void);


/*------------------------------------------------------------------------
   Interuput Service Routine: Push Button Handler  
    No inputs or outputs 
    Precondition: Check first which button is pressed 
    Postcondition: Either Allow predastrian to cross the street or reject if the 
    same button was being pressed more than one time during the same period of pedestrian crossing      
 ------------------------------------------------------------------------*/
void TimerInt(void);

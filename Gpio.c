#include "tm4c123gh6pm.h"
#include "stdint.h"
#include "stdbool.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/timer.h"
#include "driverlib/systick.h"
#include "driverlib/interrupt.h"
#include "inc/hw_types.h"
#include "inc/hw_gpio.h"
#include "inc/hw_memmap.h"
#include "inc/hw_ints.h"
#include "Gpio.h"
#include "Timer.h"
#include "Interrupts.h"

// GPIO_PortA Initialization for North-South and East-West Traffic
void portAInit(void){ 
  SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
  while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOA)){}
  GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4);    //RED, GREEN, YELLOW FOR Traffic 1
  GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7);   //RED, GREEN, YELLOW FOR Traffic 2
}

// GPIO_PortD Initialization for Pedestrian Crossing
void portDInit (void){
  SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
  while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOD)){}

  GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_0 | GPIO_PIN_1);    //RED, GREEN FOR Pedestrian 1
  GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_2 | GPIO_PIN_3);   //RED, GREEN FOR Pedestrian 2

  GPIOPinTypeGPIOInput(GPIO_PORTD_BASE, GPIO_PIN_6 | GPIO_PIN_7);    // Push Buttons For Pedestrian 1 & 2      
      
  HWREG(GPIO_PORTD_BASE+GPIO_O_LOCK) = GPIO_LOCK_KEY;
  HWREG(GPIO_PORTD_BASE+GPIO_O_CR) |= GPIO_PIN_7;

  GPIOPadConfigSet(GPIO_PORTD_BASE,GPIO_PIN_6|GPIO_PIN_7,GPIO_STRENGTH_2MA,GPIO_PIN_TYPE_STD_WPU);  
  GPIOIntRegister(GPIO_PORTD_BASE, FSM2); // Interruput Service Routine "ISR"

  
  GPIOIntEnable(GPIO_PORTD_BASE,GPIO_INT_PIN_6); // Allow Interruput on pin 6
  GPIOIntEnable(GPIO_PORTD_BASE,GPIO_INT_PIN_7); // Allow Interruput on pin 7
}
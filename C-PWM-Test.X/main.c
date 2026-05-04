#include <xc.h>
#include "gpio.h"
#include "clock.h"
#include "ioc.h"
#include "pwm1.h"
#include "pwm2.h"
#include "pwm3.h"
#include "timer0.h"
#include "pps.h"

void main(void) {
    
    /* System Clock Initialization */
	CLOCK_Initialize();
    
    /* Config Timer0 */
    TIMER0_Initialize();
    
    /* Config PortA */
    PortA_Initialize();
    
    /* Config PortB */
    PortB_Initialize();

    /* Config PortC */
    PortC_Initialize();
    
    /* Config PortD */
    PortD_Initialize();
    
    /* Config PortE */
    PortE_Initialize();
    
    /* Config PortF */
    PortF_Initialize();
      
    /* Config PPS */
    PPS_Initialize();
    
    /* PWM1 compare Initialization */
	PWM1_Initialize();
    
    /* PWM2 compare Initialization */
	PWM2_Initialize();
    
    /* PWM3 compare Initialization */
	PWM3_Initialize();
    
    /* Config IOC */
    IOC_Initialize();
        
    /* Enable interrupts */
    ei();
    
    while(1)
    {


        
    } /* while */
    
    return;
} /* main */

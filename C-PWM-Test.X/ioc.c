
#include <xc.h>
#include "ioc.h"


void IOC_Initialize(void)
{
    /* Clear the bit IOCIF by clearing all bits in IOCxF register  */
    IOCBF = 0x00; 
        
    /* Interrupt-on-change enabled */
    PIE0 = 0x80;
    
    /* Interrupt on change enabled on RB4 (falling edge) */
    IOCBN = 0x10;   
}

void __interrupt(__irq(IRQ_IOC)) IOC_ISR(void) 
{
                     
        /* Clear the bit IOCIF by clearing all bits in IOCxF register  */
        IOCBF = 0x00; 
        
       if (status==0)
       {
            status = 1;
       }
        else 
       {
            status = 0;
       }
                    
}


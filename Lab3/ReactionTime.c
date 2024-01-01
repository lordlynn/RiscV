#if defined (D_NEXYS_A7)
    #include <bsp_printf.h>
    #include <bsp_mem_map.h>
    #include <bsp_version.h>
#else
    PRE_COMPILED_MSG("no platform was defined")
#endif

#include <psp_api.h>

#include "stdlib.h"

#define GPIO_SWs   0x80001400
#define GPIO_LEDs  0x80001404
#define GPIO_INOUT 0x80001408                                               // Configure GPIO mode. Lower 16 - LEDs, upper 16 - SWs


#define READ_GPIO(dir) (*(volatile unsigned *) dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

#define DELAY 1000000

enum state {
    initial=0,
    idle = 1,
    delay = 2,
    wait = 3,
};

void delayMs(int ms);


int main(void) {
    volatile int switchValues;
    int delayVal;
    int En_Value = 0xFFFF;
    enum state currentState = initial;
    int reactionTime = 0;

    WRITE_GPIO(GPIO_INOUT, En_Value);                                       // Set LEDs as GPIO outputs
    WRITE_GPIO(GPIO_LEDs, 0x0000);                                          // Turn off LEDs
    
    uartInit();

    while (1)  {    
        switch (currentState) {
            case initial:                                                   // On startup seed the random number generator
                En_Value++;                                                 // Add to this variable until the switch is put down to start game
                switchValues = READ_GPIO(GPIO_SWs) >> 16;                   // Read swicthes
                
                if ((switchValues & 0x1) == 0) {                            // If the switch is down seed random number generator and start game
                    srand(En_Value);
                    currentState = delay;
                }
                
                break;
            case idle:
                switchValues = READ_GPIO(GPIO_SWs) >> 16;                   // Read swicthes
                
                if ((switchValues & 0x1) == 0) {                            // If the switch is down start game
                    currentState = delay;
                }
                break;
            case delay:
                WRITE_GPIO(GPIO_LEDs, 0x0000);                              // Turn off LEDs

                delayVal = rand() % 400 + 300;                              // Randome delay between 300 and 699
                delayMs(delayVal);                                          // delay
                
                WRITE_GPIO(GPIO_LEDs, 0xFFFF);                              // Turn on LEDs
                
                reactionTime = 0;
                currentState = wait;
                break;
            case wait:
                delayMs(1);
                reactionTime += 1;
                
                switchValues = READ_GPIO(GPIO_SWs) >> 16;                   // Read swicthes
                
                if ((switchValues & 0x1) == 1) {                            // If the switch is up 
                    WRITE_GPIO(GPIO_LEDs, reactionTime);                    // Display reaction time in binary on the LEDs
                    printfNexys("Reaction time was: %dms\n", reactionTime);
                    currentState = idle;
                }
                break;
            default:
                currentState = idle;
                reactionTime = 0;
                WRITE_GPIO(GPIO_LEDs, 0x0000);
                break;
        }
        
    }

    return 0;
}


void delayMs(int ms) {
    // THIS IS NOT PRECISION TIMING
    ms = ms * 16.17 * 1000;

    for (int i = 0; i < ms; i++)
        asm("nop");                                                         // Execute no-op to delay some extra time
}
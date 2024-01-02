#define GPIO_SWs   0x80001400
#define GPIO_LEDs  0x80001404
#define GPIO_INOUT 0x80001408                                   // Configure GPIO mode. Lower 16 - LEDs, upper 16 - SWs


#define READ_GPIO(dir) (*(volatile unsigned *) dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

int main(void) {
    int En_Value = 0xFFFF;
    int switch_values;
    volatile int btns = 0;
    // int i;

    WRITE_GPIO(GPIO_INOUT, En_Value);                           // Set LEDs as GPIO outputs


    while (1)  {
        switch_values = READ_GPIO(GPIO_SWs);
        switch_values = (switch_values >> 16) & 0x0000FFFF;
        WRITE_GPIO(GPIO_LEDs, switch_values);

        btns = READ_GPIO(0x80001804);



        // for (i = 0; i < 10000000; i++);                          // Delay  
        
        // WRITE_GPIO(GPIO_LEDs, 0);                               // Turn LEDs off

        // for (i = 0; i < 10000000; i++);                          // Delay
    }

    return 0;
}
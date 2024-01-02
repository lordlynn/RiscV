#define GPIO_SWs   0x80001400
#define GPIO_LEDs  0x80001404
#define GPIO_INOUT 0x80001408                                   // Configure GPIO mode. Lower 16 - LEDs, upper 16 - SWs

#define GPIO_BTNS  0x80001800                                   // Base addr of GPIO buttons. Buttons are the most significant 5 bits


#define READ_GPIO(dir) (*(volatile unsigned *) dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

int main(void) {
    int En_Value = 0xFFFF;
    volatile int btns = 0;

    WRITE_GPIO(GPIO_INOUT, En_Value);                           // Set LEDs as GPIO outputs


    while (1)  {
        btns = READ_GPIO(GPIO_BTNS);
        
        btns = (btns & 0xF8000000) >> 27;

        WRITE_GPIO(GPIO_LEDs, btns);
    }

    return 0;
}
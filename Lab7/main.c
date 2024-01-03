#define GPIO_SWs   0x80001400
#define GPIO_LEDs  0x80001404
#define GPIO_INOUT 0x80001408                                   // Configure GPIO mode. Lower 16 - LEDs, upper 16 - SWs

#define GPIO_BTNS  0x80001800                                   // Base addr of GPIO buttons. Buttons are the most significant 5 bits



#define SEG_EN     0x80001038                                   // System controller register tyo enable 7 segment display digits
#define SEG_DIGITS 0x8000103C                                   // Register to set value of each digit

#define READ_REG(dir) (*(volatile unsigned *) dir)
#define WRITE_REG(dir, value) { (*(volatile unsigned *)dir) = (value); }


int main(void) {
    volatile unsigned state;

    WRITE_REG(GPIO_INOUT, 0xFFFF);                              // Set LEDs as GPIO outputs
    WRITE_REG(SEG_EN, 0xF0);                                    // Enable first 4 segment display digits

    while (1)  {
        state = READ_REG(GPIO_SWs);
        
        state = (state & 0xFFFF0000) >> 16;

        WRITE_REG(GPIO_LEDs, state);

        WRITE_REG(SEG_DIGITS, state);
    }

    return 0;
}
#define GPIO_SWs   0x80001400
#define GPIO_LEDs  0x80001404
#define GPIO_INOUT 0x80001408                                   // Configure GPIO mode. Lower 16 - LEDs, upper 16 - SWs


#define READ_GPIO(dir) (*(volatile unsigned *) dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

int main(void) {
    int En_Value = 0xFFFF;
    volatile int value;
    int i, j, d;
    int LED_bits[] = {0x1, 0x3, 0x7, 0xF, 0x1F, 0x3F, 0x7F, 0xFF,
                      0x1FF, 0x3FF, 0x7FF, 0xFFF, 0x1FFF, 0x3FFF, 0x7FFF, 0xFFFF};
    WRITE_GPIO(GPIO_INOUT, En_Value);                           // Set LEDs as GPIO outputs

    while (1)  {    
    
        for (i = 0; i < 16; i++) {
            // left to right
            for (j = 0; j < 16-i; j++) {
                value = LED_bits[i] << j;
                WRITE_GPIO(GPIO_LEDs, value);
                for (d = 0; d < 1000000; d++);
            }
            // right to left
            for (j = 14-i; j >= 0; j--) {
                value = LED_bits[i] << j;
                WRITE_GPIO(GPIO_LEDs, value);
                for (d = 0; d < 1000000; d++);
            }
        }
    }

    return 0;
}
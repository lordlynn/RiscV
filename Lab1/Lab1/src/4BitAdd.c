#define GPIO_SWs   0x80001400
#define GPIO_LEDs  0x80001404
#define GPIO_INOUT 0x80001408                                   // Configure GPIO mode. Lower 16 - LEDs, upper 16 - SWs


#define READ_GPIO(dir) (*(volatile unsigned *) dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

int main(void) {
    int En_Value = 0xFFFF;
    int value1, value2;


    WRITE_GPIO(GPIO_INOUT, En_Value);                           // Set LEDs as GPIO outputs

    while (1)  {
        value1 = READ_GPIO(GPIO_SWs);
        value2 = value1 >> 28;
        value1 = value1 >> 16;
        WRITE_GPIO(GPIO_LEDs, (value1 & 0xF)  + (value2 & 0xF));
    }

    return 0;
}
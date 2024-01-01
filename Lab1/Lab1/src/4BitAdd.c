#define GPIO_SWs   0x80001400
#define GPIO_LEDs  0x80001404
#define GPIO_INOUT 0x80001408                                   // Configure GPIO mode. Lower 16 - LEDs, upper 16 - SWs


#define READ_GPIO(dir) (*(volatile unsigned *) dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

int main(void) {
    int En_Value = 0xFFFF;
    int value1, value2, sum;


    WRITE_GPIO(GPIO_INOUT, En_Value);                           // Set LEDs as GPIO outputs

    while (1)  {
        value1 = READ_GPIO(GPIO_SWs);
        value2 = (value1 >> 28) & 0xF;
        value1 = (value1 >> 16) & 0xF;
        sum = value1 + value2;
        WRITE_GPIO(GPIO_LEDs, (sum & 0xF) |                     // 4-bit result 
                              ((sum & ~0xF) > 0) << 4);         // 5th bit for overflow is active if any bit past the 4th is 1
    }

    return 0;
}
#define GPIO_SWs   0x80001400
#define GPIO_LEDs  0x80001404
#define GPIO_INOUT 0x80001408                                   // Configure GPIO mode. Lower 16 - LEDs, upper 16 - SWs

#define GPIO_BTNS  0x80001800                                   // Base addr of GPIO buttons. Buttons are the most significant 5 bits


#define SEG_BASE   0x80001038                                   // Base addr of seven segment registers - each byte is 1 digit
#define SEG_END    0x8000103C                                   // Addr of second half of seven segment registers - each byte is 1 digit

#define READ_REG(dir) (*(volatile unsigned *) dir)
#define WRITE_REG(dir, value) { (*(volatile unsigned *)dir) = (value); }

int decode(int val);

int main(void) {
    volatile unsigned state;

    WRITE_REG(GPIO_INOUT, 0xFFFF);                              // Set LEDs as GPIO outputs

    WRITE_REG(SEG_BASE, (decode(2)  << 0)  | 
                        (decode(1)  << 8)  |
                        (decode(16) << 16) |                    // 16 is invalid and will turn off digit
                        (decode(0)  << 24));

    WRITE_REG(SEG_END,  (decode(1)   << 0)  | 
                        (decode(1)   << 8)  |
                        (decode(0xE) << 16) |
                        (0b1001000  << 24));

    while (1)  {

    }

    return 0;
}

int decode(int val) {
    switch (val) {
        case 0x00:
            return 0b0000001;
        case 0x01:
            return 0b1001111;
        case 0x02:
            return 0b0010010;
        case 0x03:
            return 0b0000110;
        case 0x04:
            return 0b1001100;
        case 0x05:
            return 0b0100100;
        case 0x06:
            return 0b0100000;
        case 0x07:
            return 0b0001111;
        case 0x08:
            return 0b0000000;
        case 0x09:
            return 0b0001100;
        case 0x0A:
            return 0b0001000;
        case 0x0B:
            return 0b1100000;
        case 0x0C:
            return 0b1110010;
        case 0x0D:
            return 0b1000010;
        case 0x0E:
            return 0b0110000;
        case 0x0F:
            return 0b0111000;
    }

    return 0b1111111;

}
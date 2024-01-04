#define GPIO_SWs   0x80001400
#define GPIO_LEDs  0x80001404
#define GPIO_INOUT 0x80001408                                   // Configure GPIO mode. Lower 16 - LEDs, upper 16 - SWs

#define GPIO_BTNS  0x80001800                                   // Base addr of GPIO buttons. Buttons are the most significant 5 bits

#define SEG_BASE   0x80001038                                   // Base addr of seven segment registers - each byte is 1 digit
#define SEG_END    0x8000103C                                   // Addr of second half of seven segment registers - each byte is 1 digit

#define READ_REG(dir) (*(volatile unsigned *) dir)
#define WRITE_REG(dir, value) { (*(volatile unsigned *)dir) = (value); }

#define RPTC_CNTR  0x80001200                                   // Timer counter register
#define RPTC_HCR   0x80001204                                   // High reference capture/compare
#define RPTC_LCR   0x80001208                                   // Low reference capture/compare
#define RPTC_CTRL  0x8000120C                                   // Control Register


// New Timer 1
#define RPTC1_CNTR  0x80002100                                   // Timer counter register
#define RPTC1_HCR   0x80002104                                   // High reference capture/compare
#define RPTC1_LCR   0x80002108                                   // Low reference capture/compare
#define RPTC1_CTRL  0x8000210C                                   // Control Register

// New Timer 2
#define RPTC2_CNTR  0x80002200                                   // Timer counter register
#define RPTC2_HCR   0x80002204                                   // High reference capture/compare
#define RPTC2_LCR   0x80002208                                   // Low reference capture/compare
#define RPTC2_CTRL  0x8000220C                                   // Control Register

// New Timer 3
#define RPTC3_CNTR  0x80002300                                   // Timer counter register
#define RPTC3_HCR   0x80002304                                   // High reference capture/compare
#define RPTC3_LCR   0x80002308                                   // Low reference capture/compare
#define RPTC3_CTRL  0x8000230C                                   // Control Register


void displayTime(int count);
int decode(int val);


int main(void) {
    volatile unsigned state;
    volatile unsigned time = 0;
    volatile unsigned count = 0;

    WRITE_REG(GPIO_INOUT, 0xFFFF);                              // Set LEDs as GPIO outputs
    
    state = decode(0);
    state |= state << 8;
    state |= state << 16;
    state |= state << 24;

    WRITE_REG(SEG_BASE, state);                                 // Set all of the segment display digits to 0
    WRITE_REG(SEG_END, state);
    
    
    WRITE_REG(RPTC_LCR, 50000);                                 // Set count limit of 100k. 1/1Mhz * 100k = 1 ms. counter increments ever 2 cycles
    WRITE_REG(RPTC_CTRL, 0b0010001);                           // Enable timer and use Single mode

    // R
    WRITE_REG(RPTC1_HCR, 5000);
    WRITE_REG(RPTC1_LCR, 10000);                               
    WRITE_REG(RPTC1_CTRL, 0b00001001);                           // Enable timer, PWM, and use Single mode

    // G
    WRITE_REG(RPTC2_HCR, 5000);
    WRITE_REG(RPTC2_LCR, 10000);                               
    WRITE_REG(RPTC2_CTRL, 0b00001001);                           // Enable timer, PWM, and use Single mode

    // B
    WRITE_REG(RPTC3_LCR, 5000);
    WRITE_REG(RPTC3_HCR, 10000);                               
    WRITE_REG(RPTC3_CTRL, 0b00001001);                           // Enable timer, PWM, and use Single mode



    while (1)  {
        state = READ_REG(GPIO_SWs);
        state = (state & 0xFFFF0000) >> 16;
        WRITE_REG(GPIO_LEDs, state);
        

        while (READ_REG(RPTC1_CNTR) != 50000);
        
        state = READ_REG(RPTC1_CTRL);                            // Read control register
        state |= 0x40;
        WRITE_REG(RPTC1_CTRL, state);                            // Reset Counter but keep other values of control register

        time++;

        if (time == 500000) {
            count++;
            time = 0;
            displayTime(count);
        }

    }

    return 0;
}

void displayTime(int count) {
    WRITE_REG(SEG_BASE, decode(count % 10) |
                        decode(count / 10 % 10) << 8 |
                        decode(count / 100 % 10) << 16 |
                        decode(count / 1000 % 10) << 24);
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
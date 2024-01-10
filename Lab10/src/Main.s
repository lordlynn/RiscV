SPCR = 0x80001100
SPSR = 0x80001108
SPDR = 0x80001110
SPER = 0x80001118
SPCS = 0x80001120

.global main


# Accelerometer addrs
# x-data: 0x08
# y-data: 0x09
# z-data: 0x0A


main:
    # Initialize SPI peripheral
    jal spiInit
    nop

Loop:    
    # Read and display X-axis acceleration
    jal spiCSDown           # Set CS Pin low for Tx
    
    li a0, 0x08
    jal spiSendGetData      # Send read command and receive data

    jal spiCSUp             # Set CS Pin high after Tx
    

    j Loop



# Function: Init SPI peripheral
# call: by call ra, spiInit
# Destroys: t0, t1
spiInit:
    li t1, SPCR                                 # control register
    li t0, 0x53                                 # 0101_0011 no ints, core enabled, reserved, controller, cpol=0, cha=0, clock divisor 11 for 4096
    sb t0, 0(t1)

    li t1, SPER                                 # extension register
    li t0, 0x02                                 # int count 00 (7:6), clock divisor 10 (1:0) for 4096
    sb t0, 0(t1)
    ret


# Function: Pull CS Line to either high or low - Provides quick calls spiCSUp and spiCSDown
# call: by call ra, spiCS
# inputs: CS status in a0 (0 is low, 1 is high)
# outputs: None
# destroys: t0
spiCS:
    li t0, SPCS                                 # CS register
    sb a0, 0(t0)                                # Send CS status
    ret

# SPI CS Up/Down sets the CS line then calls spiCS to set the register
spiCSUp:
    li a0, 0x00
    j spiCS

spiCSDown:
    li a0, 0xFF
    j spiCS


# Function: Send byte through SPI and get the peripheral data back
# call: by call ra, spiSendGetData
# inputs: data byte to send in a0
# outputs: received data byte in a1
# destroys: t0, t1
spiSendGetData:
internalSpiClearIF:                             # internal clear interrupt flag
    li t1, SPSR                                 # status register
    lb t0, 0(t1)                                # clear SPIF by writing a 1 to bit 7
    ori t0,t0,0x80
    sb t0, 0(t1)
internalSpiActualSend:
    li t0, SPDR                                 # data register
    sb a0, 0(t0)                                # send the byte contained in a0 to spi
internalSpiTestIF:
    li t1, SPSR                                 # status register
    lb t0, 0(t1)
    andi t0, t0, 0x80
    li t1, 0x80
    bne t0,t1,internalSpiTestIF                 # loop while SPSR.bit7 == 0. (transmission in progress)
internalSpiReadData:
    li t0, SPDR                                 # data register
    lb a1, 0(t0)                                # read the message from SPI
    ret


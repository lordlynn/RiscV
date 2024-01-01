// memory-mapped I/O addresses 
# GPIO_SWs = 0x80001400 
# GPIO_LEDs = 0x80001404 
# GPIO_INOUT = 0x80001408 
.globl main 
main: 

main: 
    li t0, 0x80001400 	        # base address of GPIO memory-mapped registers 
    li t1, 0xFFFF 		        # set direction of GPIOs 
    # upper half = switches (inputs) (=0) 
    # lower half = outputs (LEDs) (=1) sw 
    sw t1, 8(t0) 		        # GPIO_INOUT = 0xFFFF 

repeat: 
    lw t1, 0(t0) 	                # read switches: t1 = GPIO_SWs 
    srli t2, t1, 16 	            # shift right by 16 to get lowest 4 switches
    andi t2, t2, 0xF                # and with 0xF to make sure is only 4 switches

    srli t3, t1, 28                 # shift right by 28 to get top 4 switches
    andi t3, t3, 0xF                # and with 0xF to make sure is only 4 switches

    add t1, t2, t3                  # add the 4-bit values together

    sw t1, 4(t0)	                # write the sum and overflow to the LEDs 
    j repeat 	                    # repeat loop
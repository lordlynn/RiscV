// memory-mapped I/O addresses 
# GPIO_SWs = 0x80001400 
# GPIO_LEDs = 0x80001404 
# GPIO_INOUT = 0x80001408 
.globl main 
main: 

main: 
    li t0, 0x80001400 	                    # base address of GPIO memory-mapped registers 
    li t1, 0xFFFF 		                    # set direction of GPIOs 
    # upper half = switches (inputs) (=0) 
    # lower half = outputs (LEDs) (=1) sw 
    sw t1, 8(t0) 		                    # GPIO_INOUT = 0xFFFF 

repeat: 
    # Blink on cycle
    lw t1, 0(t0) 	                        # read switches: t1 = GPIO_SWs 
    srli t1, t1, 16 	                    # shift val to the right by 16 bits sw 
    sw t1, 4(t0)	                        # write value to LEDs: GPIO_LEDs = t1 
    
    jal delay                               # Delay with LEDs on

    # Blink off cycle
    srli t1, t1, 16                         # shift 16 bitsa again to clear out reg t1
    sw t1, 4(t0)	                        # write value to LEDs: GPIO_LEDs = t1

    jal delay                               # Delay with LEDs off

    j repeat 	                            # repeat loop


delay:
    li t4, 75
    outer_loop:    
        li t5, 0xFFFF                       # Set a value in the count register

        delay_loop:
            addi t5, t5, -1                 # decrement count until 
            bne t5, zero, delay_loop        # if the count is not 0 yet loop again
        
        addi t4, t4, -1

        bne t4, zero, outer_loop            # runt he inner delay loop multiple times to create longer delay
    jr ra
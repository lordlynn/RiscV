// memory-mapped I/O addresses 
# GPIO_SWs = 0x80001400 
# GPIO_LEDs = 0x80001404 
# GPIO_INOUT = 0x80001408 
.globl main 
main: 

main: 
    li t0, 0x80001400 	                    # base address of GPIO memory-mapped registers 
    add t2, zero, zero                      # t2 is the loop counter
    addi t1, zero, 1                        # t1 is LED state. Start off with only 1 on
    addi s0, zero, 15                       # Sets how many times to shift left or right

repeat: 
    # scroll left cycle
    scroll_left:
        slli t1, t1, 1                      # shift LED activation to left
        sw t1, 4(t0)	                    # write value to LEDs 
        jal delay                           # Delay 
        addi t2, t2, 1                      # add 1 to the loop counter
        bne t2, s0, scroll_left             # Scroll left until loop counter matches s0
        
    add t2, zero, zero                      # Reset loop counter

    # Scroll right cycle
    scroll_right:
        srli t1, t1, 1                      # shift LED activation to left
        sw t1, 4(t0)	                    # write value to LEDs 
        jal delay                           # Delay 
        addi t2, t2, 1                      # add 1 to the loop counter
        bne t2, s0, scroll_right            # Scroll right until loop counter matches s0
    
    add t2, zero, zero                      # Reset loop counter

    # updating LEDs for next iteration
    slli t1, t1, 1                          # shift left once
    addi t1, t1, 1                          # add 1 to tunr on one more LED
    addi s0, s0, -1                         # subtract 1 from the number of times to shift
    
    beq s0, zero, main                      # when all LEDs are on, jumpt to main and start over
    
    j repeat 	                            # repeat loop


delay:
    li t4, 50
    outer_loop:    
        li t5, 0xFFFF                       # Set a value in the count register

        delay_loop:
            addi t5, t5, -1                 # decrement count until 
            bne t5, zero, delay_loop        # if the count is not 0 yet loop again
        
        addi t4, t4, -1

        bne t4, zero, outer_loop            # runt he inner delay loop multiple times to create longer delay
    jr ra
# memory-mapped I/O addresses 
# GPIO_SWs = 0x80001400 
# GPIO_LEDs = 0x80001404 
# GPIO_INOUT = 0x80001408 

.globl main 

main:
    # Setup GPIO
    li s0, 0x80001400 	                                        # base address of GPIO memory-mapped registers 
    li s1, 0xFFFF 		                                        # set direction of GPIOs 
    # upper half = switches (inputs) (=0) 
    # lower half = outputs (LEDs) (=1) sw 
    sw s1, 8(s0) 		                                        # GPIO_INOUT = 0x0000FFFF 
    
    # Setup state machine variables
    add s2, zero, zero                                          # Stores curren state
    add s3, zero, zero                                          # stores users reaction time
    addi s3, zero, 8                                            # value to pass to delayMs to delay for approx 1ms
    addi s4, zero, 1000
    slli s4, s4, 2
    j stateMachine


stateMachine:
    idle:
        bne s2, zero, delay                                     # if the state is not zero, go to delay state
        
        lw s1, 0(s0) 	                                        # read switches: t1 = GPIO_SWs 
        srli s1, s1, 16 	                                    # shift val to the right by 16 bits sw 
        
        addi t0, zero, 1                                        # Put 0x01 in t0
        and t1, s1, t0                                          # And t1 with 0x01
        bne t1, zero, stateMachine                              # if the first switch is up loop again  

        # If the switch is down
        add s3, zero, zero                                      # reset reaction time
        addi s2, zero, 1                                        # increment state to delay state

    delay:
        addi t0, zero, 1 
        bne s2, t0, waiting                                     # If the state is not 1, go to waiting state

        sw zero, 4(s0)	                                        # turn off LEDs  
        
        add a0, zero, s4
        jal delayMs

        li t0, 0xFFFF
        sw t0, 4(s0)	                                        # turn on LEDs  
        
        addi s2, s2, 1                                          # increment state

    waiting:
        addi t0, zero, 2
        bne s2, t0, default                                     # if waiting state is reached with no match, go to default

        addi a0, zero, 8
        jal delayMs
        addi s3, s3, 1                                          # count how many ms it takes to react

        lw s1, 0(s0) 	                                        # read switches: t1 = GPIO_SWs 
        srli s1, s1, 16 	                                    # shift val to the right by 16 bits sw 
        
        addi t0, zero, 1                                        # Put 0x01 in t0
        and t1, s1, t0                                          # And t1 with 0x01
        bne t1, t0, stateMachine                                # if the first switch is down loop again  

        # If the first switch is up
        sw s3, 4(s0)	                                        # Write reaction time to LEDs
        add s2, zero, zero                                      # move state back to idle
        j stateMachine
        
    default:
        add s2, zero, zero                                     # if default case is hit, set state to 0





delayMs:
    add sp, sp, -16                                             # advance stack pointer. Must be in 4 word blocks 
    sw s0, 0(sp)                                                # preserve registers used in state machine
    sw s1, 4(sp)
    sw s2, 8(sp)
    sw s3, 12(sp)

    addi s1, zero, 1000

    resetloop:
    add s0, a0, zero
    
    loop:
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        addi s0, s0, -1
        bne s0, zero, loop                                      # Run loop until count is 0

    addi s1, s1, -1
    bne s1, zero, resetloop                                     # run delay loop 1000 times

    lw s0, 0(sp)                                                # Restore registers saved to stack
    lw s1, 4(sp)
    lw s2, 8(sp)
    lw s3, 12(sp)
    add sp, sp, 16                                              # Restore stack pointer to its original addr

    ret                                                        # return

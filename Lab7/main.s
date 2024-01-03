# memory-mapped I/O addresses 
# GPIO_SWs   = 0x80001400 
# GPIO_LEDs  = 0x80001404 
# GPIO_INOUT = 0x80001408 
# GPIO_BTNS  = 0x80001800  
# SEG_EN     = 0x80001038                                   
# SEG_DIGITS = 0x8000103C

.globl main 
main: 

main: 
li t0, 0x80001400 	    # base address of GPIO memory-mapped registers 
li t1, 0x80001038       # Base address of 7 segment display

li t2, 0xFFFF 		    # set direction of GPIOs 

# upper half = switches (inputs) (=0) 
# lower half = outputs (LEDs) (=1) sw 
sw t2, 8(t0) 		    # GPIO_INOUT = 0xFFFF - Set LEDs as outputs

li t2, 0xF0             # Enable value for 7 segment display
sw t2, 0(t1)            

repeat: 
lw t2, 0(t0) 	        # read switches: t1 = GPIO_SWs 
srli t2, t2, 16 	    # shift val to the right by 16 bits sw 
sw t2, 4(t0)	        # write value to LEDs: GPIO_LEDs = t1 
sw t2, 4(t1)            # Write switch value to 7 seg display
j repeat 	            # repeat loop


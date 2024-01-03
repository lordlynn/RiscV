; #define SEGEN  0x80001038
; #define SEGDIG 0x8000103C

.globl main 
main: 
    li t1, 0x80001038
    li t6, 0xFC
    sb t6, 0(t1)


    li t1, 0x8000103C
    li t6, 0x71
    sw t6, 0(t1)

next:   beq zero, zero, next



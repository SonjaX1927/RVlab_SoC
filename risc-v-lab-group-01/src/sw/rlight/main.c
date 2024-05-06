#include <stdio.h>
#include "rvlab.h"

#define REGA   0x10000000 //pattern; unit: bytes
#define REGB   0x10000004 //FSM
#define REGC   0x10000008 //delay register

static void delay_cycles(int n_cycles) {
    REG32(RV_TIMER_CTRL(0)) = (1<<RV_TIMER_CTRL_ACTIVE0_LSB);
    REG32(RV_TIMER_TIMER_V_LOWER0(0)) = 0;
    while(REG32(RV_TIMER_TIMER_V_LOWER0(0)) < n_cycles);
}

int main(void) {

    // Implement tests here.

    // Example:

    printf("REGA 0x%08x\n", REG32(REGA)); 
    REG32(REGA) = 0x12345678; // test value
    printf("REGA 0x%08x\n", REG32(REGA));
    delay_cycles(2);
    
    // initialize the FSM
    REG32(REGB) = 0xFFFFFF01; // initial value
    printf("REGB 0x%08x\n", REG32(REGB));
    delay_cycles(10);

    // change patterns
    REG32(REGA) = 0x1234FE78; // pattern 11111110 ? middle 2bytes
    printf("REGA 0x%08x\n", REG32(REGA));
    delay_cycles(50);

    REG32(REGA) = 0x12348078; // pattern 10000000
    printf("REGA 0x%08x\n", REG32(REGA));
    delay_cycles(50);
    
    
    return 0;
}

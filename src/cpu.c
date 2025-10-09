/* eta-tau Source Code
 * cpu.c
 * (c) osminee, 2025
 *
 * CPU struct and functions
 */

#include "types.h"

struct cpu {
    struct {
        word a : 12; word : 4;
        word b : 12; word : 4;
        word c : 12; word : 4;
        word d : 12; word : 4;

        hword f : 6; hword : 2;
    } regs;
} cpu;

/* todo: finish the implementation */
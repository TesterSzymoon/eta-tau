/* eta-tau Source Code
 * cpu.c
 * (c) osminee, 2025
 *
 * CPU struct and functions (header)
 */

#include "types.h"

struct cpu {
    struct {
        word a;
        word b;
        word c;
        word d;

        hword fl; /* flags */
        aword sk; /* stack end pointer */
    } regs;
} cpu;

/* todo: finish the implementation */
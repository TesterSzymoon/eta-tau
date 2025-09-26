/* eta-tau Source Code
 * cpu.c
 * (c) osminee, 2025
 *
 * CPU struct and functions
 */

#include "mem.h"

struct cpu {
    struct {
        hword al : 6; hword : 2;
        hword ah : 6; hword : 2;
        hword bl : 6; hword : 2;
        hword bh : 6; hword : 2;
        hword cl : 6; hword : 2;
        hword ch : 6; hword : 2;
        hword dl : 6; hword : 2;
        hword dh : 6; hword : 2;
    } regs;
} cpu;

/* todo: finish the implementation */
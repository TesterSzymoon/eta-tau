/* eta-tau Source Code
 * mem.c
 * (c) osminee, 2025
 *
 * Memory functions and struct
 */

#include "const.h"
#include "mem.h"
#include "types.h"

#define LOC_WRAP loc % MEM_AMNT

/* mem_hw_r
 * Read a halfword from memory and return that halfword.
 */
hword mem_hw_r(hword* mem, unsigned int loc) {
	return mem[LOC_WRAP]; /* memory address wrap-around */
}

/* mem_hw_w
 * Write a halfword to memory.
 */
void mem_hw_w(hword* mem, unsigned int loc, hword hw) {
    mem[LOC_WRAP].x = hw.x & 0x3f; /* we only care about the 6 lower bits */
}

/* big todo: create and finish the rest of the memory functions */

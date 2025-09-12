/* eta-tau Source Code
 * mem.c
 * (c) osminee, 2025
 *
 * Memory functions and struct
 */

#include "mem.h"
#include "const.h"

#define LOC_WRAP loc % MEM_AMNT

/* mem_hw_r
 * Read a halfword from memory and return that halfword.
 */
hword mem_hw_r(hword* mem, unsigned int loc) {
	return mem[LOC_WRAP]; /* memory address wrap-around */
}

/* big todo: create and finish the rest of the memory functions */
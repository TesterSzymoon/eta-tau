/* eta-tau Source Code
 * mem.h
 * (c) osminee, 2025
 *
 * Memory functions and struct (header)
 */

#ifndef MEM_H
#define MEM_H

#include "types.h"

hword mem_hw_r(hword* mem, unsigned int loc);
/*hword mem_wd_r();
hword mem_aw_r();*/

void  mem_hw_w(hword* mem, unsigned int loc, hword hw);
/*hword mem_wd_w();
hword mem_aw_w();*/

#endif
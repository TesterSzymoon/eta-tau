/* eta-tau Source Code
 * mem.h
 * (c) osminee, 2025
 *
 * Typedefs for the emulator
 */

#ifndef TYPES_H
#define TYPES_H

typedef unsigned char hword; /* use only lower 8 bits */
typedef struct {hword x[2];} word;
typedef struct {hword x[3];} aword;

#endif
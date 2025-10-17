/* eta-tau Source Code
 * mem.h
 * (c) osminee, 2025
 *
 * Typedefs for the emulator
 */

#ifndef TYPES_H
#define TYPES_H

typedef struct {unsigned char x : 6;} hword;
typedef struct {hword x[2];} word;
typedef struct {hword x[3];} aword;

#endif
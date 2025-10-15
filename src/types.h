/* eta-tau Source Code
 * mem.h
 * (c) osminee, 2025
 *
 * Typedefs for the emulator
 */

typedef struct {unsigned char x : 6;} hword;
typedef struct {hword x[2];} word;
typedef struct {hword x[3];} aword;
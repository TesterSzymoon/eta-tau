# Zgelk 1201 CPU

## General
The Zgelk 1201 processor is a 6/12-bit CPU, employed in the eta-tau computer. It has 6-bit (64 possible) opcodes, with 12-bit registers and an 18-bit address bus.

## Terminology
- halfword - half of the machine word, equivalent to 6 bits
- word - the machine word defined as 12 bits
- adword - the address "word", equivalent to 3 halfwords or 18 bits

## Addressing memory
The 1201 has an 18-bit address bus, meaning that it can address 262,144 locations. The CPU accesses these locations as halfwords, meaning the maximum amount of memory addressable by the machine is 131072 words. (Obviously, a 1201 system doesn't use 8-bit memory, but a 6-bit one.)

## Registers and flags
TODO: describe the registers (including CPU flags)

## INSTRUCTION SET
The 1201 has 64 possible instructions due to its 6/12-bit design. Each opcode is encoded in the first 6 bits, then the arguments are given in a variable amount of halfwords. The maximum size of an instruction is 3 words. Each instruction is seeked from memory sequentially as a given number of halfwords.

Each register is 12 bits wide, memory addresses are 18 bits wide.

(val) - halfword, <val> - word, [adr] - address

(000000)  0 - NOP             - no operation
(000001)  1 - LDH (val) (reg) - load a halfword to the specified register
                                (can specify low/high part of register)
(000010)  2 - LDW <val> (reg) - load a word to the specified register
(000011)  3 - STH [adr] (reg) - store the halfword from the specified 
                                register in the memory address
(000100)  4 - STW [adr] (reg) - store a word from the specified register
                                in the memory address
(000101)  5 - CMP (val) (reg) - compare the specified register's value
                                to the given halfword (every CMP variant
                                sets the appropriate processor flags)
(000110)  6 - ADD (val)       - add the given halfword to the A register
(000111)  7 - ADD (reg)       - add the value from the specified register
                                to the A register
(001000)  8 - CMP (rg1) (rg2) - compare the specified register's value
                                to the value of another register
                                (rg1 to rg2)
(001001)  9 - CMP <val> (reg) - compare the specified register's value
                                to the given word
(001010) 10 - SUB (val)       - subtract a halfword from the A register
(001011) 11 - SUB (reg)       - subtract the value of the given register
                                from the A register
(001100) 12 - JMC (cnd) [adr] - jumps to the given address if the given
                                condition is true (short variant)
(001101) 13 - unused
(001110) 14 - JMN (cnd) [adr] - jumps to the given address if the given
                                condition is NOT true (short variant)
(001111) 15 - unused
(010000) 16 - JMP [adr]       - jumps to an address unconditionally
(010001) 17 - TFR (rg1) (rg2) - transfer (copy) the value of a register
                                to another register (rg1 to rg2)
(010010) 18 - PSH (val)       - push a halfword onto stack
(010011) 19 - PSW <val>       - push a word onto stack
(010100) 20 - PSA [val]       - push an adword onto stack
(010101) 21 - PPA [val]       - pop an adword from stack
(010110) 22 - PPH (val)       - pop a halfword from stack
(010111) 23 - PPW <val>       - pop a word from stack
(011000) 24 - SBR [adr]       - jump to the given address as subroutine
(011001) 25 - RET             - return from the subroutine

TODO: finish

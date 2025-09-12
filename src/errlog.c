/* eta-tau Source Code
 * errlog.c
 * (c) osminee, 2025
 *
 * Error messages and logging
 */

#include "stdio.h"

/* errftl
 * Prints a fatal error and returns the error code.
 */
int errftl(char* mes, int erc) {
	printf("fatal error: %s (%d)\n", mes, erc);
	return erc;
}
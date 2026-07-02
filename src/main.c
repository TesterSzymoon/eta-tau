/* eta-tau Source Code
 * main.c
 * (c) osminee, 2025
 *
 * Main function
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "const.h"
#include "errlog.h"
#include "types.h"

/* main function */
int main(int argc, char** argv) {

	/* create main window and all necessary components */

	/* main init */

	hword* mem = (hword*) malloc(MEM_AMNT); /* ugly memory test, will be done with shortly */
	if (!mem) return errftl("couldn't allocate sufficient memory for the system", 2);

	/* main program loop */

	free(mem);

	printf("cleaned up, exiting\n");

	return 0;
}

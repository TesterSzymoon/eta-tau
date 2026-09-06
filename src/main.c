/* eta-tau Source Code
 * main.c
 * (c) osminee, 2025
 *
 * Main function
 */

#include <stdlib.h>
#include <stdio.h>
#include "raylib.h"

#include "const.h"
#include "errlog.h"
#include "mem.h" /* get rid of that, tests */
#include "types.h"

/* main function */
int main(int argc, char** argv) {

	/* create main window and all necessary components */

	/* main init */

	hword* mem = (hword*) malloc(MEM_AMNT); /* ugly memory test, will be done with shortly */
	if (!mem) return errftl("couldn't allocate sufficient memory for the system", 2);

	/* main program loop */

	SetTraceLogLevel(LOG_ERROR); /* we only want to get notified of errors */

	InitWindow(DEFAULT_BASE_W * DEFAULT_BASE_S, DEFAULT_BASE_H * DEFAULT_BASE_S, ETA_NAME);
	SetTargetFPS(60);

	printf("allocated %d bytes\n", MEM_AMNT * sizeof(hword));

	/* tests */
	mem_hw_w(mem, 0, (hword) 0x0f);
	printf("val: %.2x\n", mem_hw_r(mem, 0));
	/* ----- */

	while(!WindowShouldClose()) {
		BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("eta-tau!", 50, 50, 20, DARKGRAY);
        EndDrawing();
	}

	CloseWindow();

	free(mem);

	printf("cleaned up, exiting\n");

	return 0;
}

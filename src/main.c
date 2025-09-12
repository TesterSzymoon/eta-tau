/* eta-tau Source Code
 * main.c
 * (c) osminee, 2025
 *
 * Main function
 */

#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "const.h"
#include "errlog.h"
#include "mem.h"

/* main function */
int main(int argc, char** argv) {
	/* init allegro and addons */
	al_init();
	al_init_font_addon();
	al_init_primitives_addon();
	al_install_keyboard();
	al_install_mouse();

	/* create main window and all necessary components */
	ALLEGRO_DISPLAY* disp = al_create_display(DEFAULT_BASE_W * DEFAULT_BASE_S, DEFAULT_BASE_H * DEFAULT_BASE_S);
	ALLEGRO_EVENT_QUEUE* defq = al_create_event_queue();
	ALLEGRO_TIMER* refresh = al_create_timer(1.0 / 60.0); /* 60 fps */
	ALLEGRO_EVENT ce; /* current event */
	char* wintit[TITBUF_SIZE];
	bool finished = false;
	ALLEGRO_FONT* defnt = al_create_builtin_font();
	ALLEGRO_MOUSE_STATE ms;

	/* main init */
	if (!disp) return errftl("couldn't create display", 1);
	if (!defq) return errftl("couldn't create event queue", 1);
	if (!refresh) return errftl("couldn't create refresh timer", 1);
	if (!defnt) return errftl("couldn't create default font", 1);

	hword* mem = (hword*) malloc(MEM_AMNT); /* ugly memory test, will be done with shortly */
	if (!mem) return errftl("couldn't allocate sufficient memory for the system", 2);

	al_register_event_source(defq, al_get_display_event_source(disp));
	al_register_event_source(defq, al_get_timer_event_source(refresh));

	snprintf(wintit, TITBUF_SIZE, "%s v%s", ETA_NAME, ETA_VER);
	al_set_window_title(disp, wintit); /* change the window title */

	al_start_timer(refresh);

	/* main program loop */
	for (; !finished;) {
		al_wait_for_event(defq, &ce);
		switch (ce.type) {

			/* trying to close window */
		case ALLEGRO_EVENT_DISPLAY_CLOSE:
			finished = true;
			break;

		case ALLEGRO_EVENT_TIMER:
			al_get_mouse_state(&ms);
			al_clear_to_color(al_map_rgb(0, 0, 0));
			al_flip_display();
			break;
		}
	}

	free(mem);

	al_destroy_event_queue(defq);
	al_destroy_display(disp);

	al_uninstall_mouse();
	al_uninstall_keyboard();

	return 0;
}

/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8-*- */
/*
 * freetuxtv
 * Copyright (C) FreetuxTV Team's 2008
 * Project homepage : http://code.google.com/p/freetuxtv/
 * 
 * freetuxtv is free software.
 * 
 * You may redistribute it and/or modify it under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 * 
 * freetuxtv is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with brasero.  If not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */

#include <gtk/gtk.h>

#include "freetuxtv-main-window.h"

int main (int argc, char *argv[])
{
	gtk_init (&argc, &argv);
	
	FreetuxTVMainWindowClass* freetuxtv;
	freetuxtv = freetuxtv_main_window_new ();

	/* Dessin de l'interface */
	gtk_widget_show_all (freetuxtv->mainwin);

	freetuxtv_player_init(freetuxtv->player);
	/*freetuxtv_player_play(freetuxtv->player,"file://./tshirt_japonais.mpg");*/
	freetuxtv_player_play(freetuxtv->player,"http://mafreebox.freebox.fr/freeboxtv/playlist.m3u");
	gtk_main ();
	
	
	return 0;
}
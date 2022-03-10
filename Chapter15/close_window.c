#include <gtk/gtk.h>

void end_program (GtkWidget *wid, gpointer ptr)
{
	gtk_main_quit ();
}

void main (int argc, char *argv[])
{
	// Init GTK
	gtk_init (&argc, &argv);
	
	// Create a new window
	GtkWidget *win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	
	// Create a close window button
	GtkWidget *btn = gtk_button_new_with_label ("Close window");
	
	// When the button is clicked, exit the program
	g_signal_connect (btn, "clicked", G_CALLBACK (end_program), NULL);
	
	// When the X is clicked, exit the program
	g_signal_connect (win, "delete_event", G_CALLBACK (end_program),
		NULL);
	
	// Put the button in the window.
	gtk_container_add (GTK_CONTAINER (win), btn);
	
	// Show the widget and all the content.
	gtk_widget_show_all (win);
	
	// Pass to the GTK loop.
	gtk_main ();
}

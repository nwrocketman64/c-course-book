#include <gtk/gtk.h>

int main (int argc, char *argv[])
{
	// Initialises GTK
	gtk_init (&argc, &argv);
	
	// Create a new widget
	GtkWidget *win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	
	// Show the new widget
	gtk_widget_show (win);
	
	// Start the main GTK loop.
	gtk_main ();
	
	// Close when finish.
	return 0;
}

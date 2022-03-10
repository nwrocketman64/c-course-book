#include <stdio.h>

void main (int argc, char *argv[])
{
	// Declare a file variable
	FILE *fp;
	
	// Check to see if there is more than one argument
	if (argc > 1){
		
		// Open the file according to user
		fp = fopen (argv[1], "wb");
		
		// If the file was opened, write the data to it
		if (fp)
		{
			// Write to file
			fprintf (fp, "This is some text.\n");
			
			// Close the file and report to user
			fclose (fp);
			printf ("Text Saved\n");
		}
		// If writing the file failed, report to user
		else
		{
			printf ("ERROR: Unable to write file\n");
		}
	}
	// If user didn't give a filename
	else
	{
		printf ("ERROR: No filename\n");
	}
}

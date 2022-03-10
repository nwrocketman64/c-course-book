#include <stdio.h>

void main (int argc, char *argv[])
{
	// Declare a file variable and an integer variable
	FILE *fp;
	int value;
	
	// Check to see if there is more than one argument
	if (argc > 0){
		
		// Open the file according to user
		fp = fopen (argv[1], "wb");
		
		// If the file was opened, write the data to it
		if (fp)
		{
			for (value = 48; value < 58; value++)
			{
				// write the data according to value
				fputc (value, fp);
			}
			// Close the file
			fclose (fp);
		}
	}
}

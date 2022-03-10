#include <stdio.h>

void main (int argc, char *argv[])
{
	// Declare a file variable
	FILE *fp;
	int value;
	
	// Check to see if there is more than one argument
	if (argc > 1){
		
		// Open the file according to user
		fp = fopen (argv[1], "rb");
		
		// If the file was opened, write the data to it
		if (fp)
		{
			
			// Read the file
			fseek (fp, 10, SEEK_CUR);
			while (1)
			{
				value = fgetc (fp);
				if (value == EOF) break;
				else printf ("%c", value);
			}
			
			// Close the file and report to user
			fclose (fp);
		}
		// If writing the file failed, report to user
		else
		{
			printf ("ERROR: Unable to read file\n");
		}
	}
	// If user didn't give a filename
	else
	{
		printf ("ERROR: No filename\n");
	}
}

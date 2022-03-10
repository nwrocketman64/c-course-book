#include <stdio.h>

void main (void)
{
	// Declare a file variable and integer variable
	FILE *fp;
	int value;
	
	// Open the file and read it as binary
	fp = fopen ("input.txt", "rb");
	
	// Check to see if opening the file was successful
	if (fp)
	{
		// Run a loop that reads the file one character a prints
		while (1)
		{
			// Read the next character
			value = fgetc (fp);
			
			// If we reach end of file, break the loop
			if (value == EOF) break;
			
			// If not print the character
			else printf ("%c", value);
		}
		// End by adding a new line and closing the file
		printf ("\n");
		fclose (fp);
	}
	// If the file was not able to be open, print an error message
	else
	{
		printf ("ERROR: Unable to open the file\n");
	}
}

#include <stdio.h>

void main (void)
{
	// Declare int val and char string
	int val = 12;
	char string[50];
	
	// Call sprintf to val and other text to string
	sprintf (string, "The value of val is %d\n", val);
	
	// Output the results to the user
	printf ("%s", string);
}

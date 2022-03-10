#include <stdio.h>
#include <string.h>

void main (void)
{
	// Declare a string variable
	char str1[10] = "first";
	
	// Use strlen to find the length of string and Output the results
	printf ("The lenght of the string '%s' is %d\n",
		str1, strlen (str1));
}

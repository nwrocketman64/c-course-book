#include <stdio.h>
#include <string.h>

void main (void)
{
	// Declare two strings to be compared
	char str1[10] = "first";
	char str2[10] = "first";
	
	// Use strcmp to compare the strings and if true, report to user
	if (strcmp (str1, str2) == 0)
	{
		printf ("The two strings are identical.\n");
	}
	// If the strings are different, report to user
	else
	{
		printf ("The two strings are different.\n");
	}
}

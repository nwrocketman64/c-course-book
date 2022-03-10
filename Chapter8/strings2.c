#include <stdio.h>

void main (void)
{
	// Declare two stings to be compare to
	char str1[10] = "first";
	char str2[10] = "first";
	
	// Declare two pointer and set them to the strings
	char *ptr1 = str1, *ptr2 = str2;
	
	// Start a while-loop to cycle through the strings
	while (*ptr1 != 0 && *ptr2 != 0)
	{
		// If the two characters of both strings are different, break loop
		if (*ptr1 != *ptr2)
		{
			break;
		}
		
		// Increment the pointer to move to the next character
		ptr1++;
		ptr2++;
	}
	
	// The strings are the same, report to user
	if (*ptr1 == 0 && *ptr2 == 0)
	{
		printf ("The two strings are identical.\n");
	}
	// If the strings are different, report to user
	else
	{
		printf ("The two strings are different.\n");
	}
}

#include <stdio.h>

void main (void)
{
	// Declare 3 strings variable
	char str1[10] = "first";
	char str2[10] = "second";
	char str3[20];
	
	// Create two pointer variables
	char *src, *dst;
	
	// Set source to string 1 and set destenation string to string 3
	src = str1;
	dst = str3;
	
	// Create a while-loop to transverse the first string
	while (*src != 0)
	{
		*dst = *src;
		src++;
		dst++;
	}
	
	// Create another while-loop to transverse the second string
	src = str2;
	while (*src != 0)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = 0;
	
	// Output the three strings to the user.
	printf ("%s + %s = %s\n", str1, str2, str3);
}

#include <stdio.h>
#include <string.h>

void main (void)
{
	// Declare three strings
	char str1[10] = "first";
	char str2[10] = "second";
	char str3[20];
	
	// Copy string 1 to string 3
	strcpy (str3, str1);
	
	// Copy string 2 to string 3 at the end of string 3
	strcat (str3, str2);
	
	// Output the result to the user
	printf ("%s + %s = %s\n", str1, str2, str3);
}

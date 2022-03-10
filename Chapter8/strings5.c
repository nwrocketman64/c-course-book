#include <stdio.h>

void main (void)
{
	// Declare three variable, one a string with two number in it
	int val;
	char result[10];
	char string[25] = "The first number is 1";
	
	// If sscanf can find two value in the string, report to user
	if (sscanf (string, "The %s number is %d", result, &val) == 2)
	{
		printf ("String : %s Value : %d\n", result, val);
	}
	// If sscanf could not find two value, report to user
	else
	{
		printf ("I couldn't find two values in that string.\n");
	}
}

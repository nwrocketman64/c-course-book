#include <stdio.h>

void main (void)
{
	// Declare two variable, one as a string holding a number
	int val;
	char string[10] = "250";
	
	// Use sscanf to get the number value of the string
	sscanf (string, "%d", &val);
	
	// Output the results to the user
	printf ("The value in the string is %d\n", val);
}

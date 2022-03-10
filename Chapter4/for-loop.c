#include <stdio.h>

void main (void)
{
	// Declare the variable a
	int a;
	
	// Setup a for-loop for outputting the state of a
	for (a = 0; a < 5; a++)
	{
		// Output the state of the variable a
		printf ("a is equal to %d\n", a);
	}
	
	// Output the results to the user
	printf ("a is equal to %d and I've finished\n", a);
}

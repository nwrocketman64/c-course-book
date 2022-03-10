#include <stdio.h>

void main (void)
{
	// Declare the variables
	int a = 0;
	
	// Setup the loop to increment the variable a
	while (a < 5)
	{
		// Output the state of a and then increment a
		printf ("a is equal to %d\n", a);
		a++;
	}
	// Once the loop is done, output the results to the user
	printf ("a is equal to %d and I've finished\n", a);
}

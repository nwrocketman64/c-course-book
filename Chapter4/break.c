#include <stdio.h>

void main (void)
{
	// Declare the variable a
	int a = 0;
	
	// Setup an endless while-loop
	while (1)
	{
		// Print the state of variable a and increment a
		printf ("a is equal to %d\n", a);
		a++;
		
		// Check to see if a is equal to five and if so break the loop
		if (a == 5)
		{
			break;
		}
	}
	
	// Output the results to the user
	printf ("a is equal to %d and I've finished\n", a);
}

#include <stdio.h>

void main (void)
{
	// Declare the variable a
	int a = 0;
	
	// Setup a do-while loop as long as a is less than 5
	do
	{
		// Print the state of the variable a and then increment
		printf ("a is equal to %d\n", a);
		a++;
	} while (a < 5);
	
	// Output the result to the user
	printf ("a is equal to %d and I've finished\n", a);
}

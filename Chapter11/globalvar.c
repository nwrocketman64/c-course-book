#include <stdio.h>

// Declare a global variable that stores the results
int result;

/***********************************************************************
 * ADD
 * The function adds two values.
 **********************************************************************/
void add (int a, int b)
{
	// Add a and b and store it in result
	result = a + b;
}

/***********************************************************************
 * Main
 * The main program.
 **********************************************************************/
void main (void)
{
	// Add 3 and 4 and then output the results to the user.
	add (3, 4);
	printf ("The result is %d\n", result);
}

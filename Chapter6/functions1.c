#include <stdio.h>

/******************************
 * SUM:
 * Adds two number togethers
 ******************************/
int sum (int a, int b)
{
	// Declare a variable to store the sum
	int res;
	
	// Add a and b together and store it in res and return it
	res = a + b;
	return res;
}

/******************************
 * MAIN:
 * Where the program starts
 ******************************/
void main (void)
{
	// Declare the variable to store the starting values
	int y = 2;
	
	// Call sum and store the return in z
	int z = sum (5, y);
	
	// Output the results to the user
	printf ("The sum of 5 and %d is %d\n", y, z);
}

#include <stdio.h>

/*******************************************************
 * SUM_AND_DIFF:
 * Calculates the sum and the difference of two integers
 *******************************************************/
int sum_and_diff (int a, int b, int *res)
{
	// Declare a variable to store the value of sum
	int sum;
	
	// Add and substract a and b and store it in sum and res
	sum = a + b;
	*res = a - b;
	
	// Return sum
	return sum;
}

/*******************************************************
 * MAIN:
 * The main part of the program
 *******************************************************/
void main (void)
{
	// Declare the variables to hold the starting values
	int b = 2;
	int diff;
	
	// Call sum and output the results to the user
	printf ("The sum of 5 and %d is %d\n", b,
		sum_and_diff (5, b, &diff));
	printf ("The difference of 5 and %d is %d\n", b, diff);
}

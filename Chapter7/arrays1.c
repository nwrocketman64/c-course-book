#include <stdio.h>

void main (void)
{
	// Setup array a and the variable count
	int a[10];
	int count;
	
	// Create a for-loop that cycles through array a
	for (count = 0; count < 10; count++)
	{
		// Set a at count to count plus count times 10 
		a[count] = count * 10 + count;
	}
	
	// Output the first and secound elements and their addresses to user
	printf ("The first and second elements of a are %d and %d\n",
		a[0], a[1]);
	printf ("Or, as pointers, %d and %d\n", *a, *(a + 1));
}

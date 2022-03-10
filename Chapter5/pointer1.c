#include <stdio.h>

void main (void)
{
	// Declare the variable a and a pointer to a
	int a;
	int *ptr_to_a;
	
	// Set the pointer to the variable a
	ptr_to_a = &a;
	
	// Set a to 5
	a = 5;
	
	// Output two different states of the variable a
	printf ("The value of a is %d\n", a);
	
	// Change a to 6 via the pointer
	*ptr_to_a = 6;
	printf ("The value of a is %d\n", a);
	
	// Print all the different states of the variables
	printf ("The value of ptr_to_a %d\n", ptr_to_a);
	printf ("It stores the value %d\n", *ptr_to_a);
	printf ("The address of a is %d\n", &a);
}

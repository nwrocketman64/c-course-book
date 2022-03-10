#include <stdio.h>

void main (void)
{
	// Declare the variables and the void pointer
	int intval = 255958283;
	void *vptr = &intval;
	
	// Output the states of the void pointer
	printf ("The value at vptr as an int is %d\n", *((int *) vptr));
	printf ("The value at vptr as a char is %d\n", *((char *) vptr));
}

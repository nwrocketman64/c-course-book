#include <stdio.h>

void main (void)
{
	// Declare the variable a
	int a = 0;
	
	// Check to see what a is equal to
	switch (a)
	{
		case 0: printf ("a is equal to 0\n"); // If a is 0
		break;
		case 1: printf ("a is equal to 1\n"); // If a is 1
		break;
		default: printf ("a is greater than 1\n"); // If not
	}
}

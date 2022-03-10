#include <stdio.h>

// Define the value of Pi.
#define PI 3.14159

void main (void)
{
	// Setup the variables that represent the circle.
	float rad = 3;
	float circ = rad * 2 * PI;
	float area = rad * rad * PI;
	
	// Output the results to the users.
	printf ("The circumference of a circle radius %f is %f\n",
		rad, circ);
	printf ("The area of a circle radius %f is %f\n", rad, area);
}

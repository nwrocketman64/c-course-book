#include <stdio.h>

// Create a structure call MY_DATA that stores three integers
typedef struct {
	int inval1;
	int inval2;
	int outval;
} MY_DATA;

/***********************************************************************
 * ADD
 * Add values from MY_DATA structure
 **********************************************************************/
void add (MY_DATA *d)
{
	// Add inval1 and inval2 and store it in outval
	d->outval = d->inval1 + d->inval2;
}

/***********************************************************************
 * MAIN
 * The main program
 **********************************************************************/
void main (void)
{
	// Create a variable data
	MY_DATA data;
	
	// Add 5 to inval1 and 7 to inval2
	data.inval1 = 5;
	data.inval2 = 7;
	
	// Call add to add the two number
	add (&data);
	
	// Output the results to the user
	printf ("The sum of %d and %d is %d\n", data.inval1,
	data.inval2, data.outval);
}

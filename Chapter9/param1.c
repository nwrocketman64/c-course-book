#include <stdio.h>

int main (int argc, char *argv[])
{
	// Create a for-loop that cycles through all the parameter
	for (int param = 0; param < argc; param++)
	{
		// Output the parameters
		printf ("Parameter %d is %s\n", param, argv[param]);
	}
	
	// Close the program
	return 0;
}

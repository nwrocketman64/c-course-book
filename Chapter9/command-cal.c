#include <stdio.h>

int main (int argc, char *argv[])
{
	// Declare two variables to store the numbers from the arguments
	int num1, num2;
	
	// Make sure there are 4 and only 4 arguments
	if (argc == 4)
	{
		// Convert arguments 1 and 3 to numbers
		sscanf (argv[1], "%d", &num1);
		sscanf (argv[3], "%d", &num2);
		
		// Do the operation according to the second argument
		if (*argv[2] == '+') printf ("%d\n", num1 + num2);
		if (*argv[2] == '-') printf ("%d\n", num1 - num2);
		if (*argv[2] == 'x') printf ("%d\n", num1 * num2);
		if (*argv[2] == '/') printf ("%d\n", num1 / num2);
	}
	
	// Close the program
	return 0;
}

#include <stdio.h>

void main (void)
{
	// Declare three variable, one for input buffer, one for name
	char input[256], name[256];
	int age;
	
	// Prompt user for their name, store it in input as a string
	printf ("What is your name, user?\n");
	fgets (input, 256, stdin);
	
	// Use sscanf to move it data to name as a string
	sscanf (input, "%s", name);
	
	// Prompt the user for their age
	printf ("Hello, %s. How old are you?\n", name);
	
	// Create a while-loop to process the user's input
	while (1)
	{
		// Get the user's input and store it in input as a string
		fgets (input, 256, stdin);
		
		// Use sscanf to proccess the input and put it in age and break
		if (sscanf (input, "%d", &age) == 1) break;
		
		// If sscanf didn't work, prompt the user again
		printf ("I don't recognise that as an age - try again!\n");
	}
	
	// Greet the user
	printf ("Well, %s, you look young for %d...\n", name, age);
}

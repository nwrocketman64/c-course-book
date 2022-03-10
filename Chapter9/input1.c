#include <stdio.h>

void main (void)
{
	// Declare two variables, one for the name and one for the age
	char input[256];
	int age;
	
	// Prompt the user for their name, store it as a string in input
	printf ("What is your name, user?\n");
	scanf ("%s", input);
	
	// Prompt the user for their age, store it as a integer in age
	printf ("Hello, %s. How old are you\n", input);
	scanf ("%d", &age);
	
	// Greet the user
	printf ("Well, %s, you look young for %d...\n", input, age);
}

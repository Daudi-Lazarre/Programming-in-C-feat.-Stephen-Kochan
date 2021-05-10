#include <stdio.h>

// Write a program to generate and print a table of the first 10 factorials.

int main(void)
{
	int n;
	// This is important: factorial starts at one
	int factorial = 1;

	// The thing to solve here is the loop...

	printf("Here are the first ten factorials.\n");

	// Value is declared here in the for loop.
	// Once the value hits ten, the loop will return a FALSE value.
	// Until that point, increment by one.
	for(n = 1; n < 11; n++)
	{
		printf("Factorial number: %i.\n", n);
		printf("Factorial product: %i.\n", factorial);

                // THIS is where the factorial formula comes in to play.
		// Factorial equals factorial times n.
		// Both of these values scale as the loop goes on.

		factorial *= n;
	}
	return(1);
}

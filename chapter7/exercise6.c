// Program to generate the first 15 Fibonacci numbers

#include <stdio.h>


// Three variables:
// Store two previous fibonacci numbers
// Store one current one

// Do not use arrays
// Display the fibonacci number as its generated

int main (void)
{
	int i;
	int fibnum1 = 0;
	int fibnum2 = 1;
	int currentfibnum;

// I took me a little while and some help to understand this.

	// Print the first fib numbers on their own.
	printf("%i\n", fibnum1);
	printf("%i\n", fibnum2);

	// Increment from 0 to 13
	for(i = 0; i < 13; i++)
	{
		// Current number is equal to the sum of the last two
		currentfibnum = fibnum1 + fibnum2;
		// The first number is equal to the second number
		fibnum1 = fibnum2;
		// The second number is equal to the currentfibnum
		fibnum2 = currentfibnum;
		// This is what ties the fibonacci formula together.
		// See notes for drawing
		printf("%i\n", currentfibnum);
	}

	return(0);
}

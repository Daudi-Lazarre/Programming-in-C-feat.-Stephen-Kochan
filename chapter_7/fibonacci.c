// Program to generate the first 15 Fibonacci numbers
// See p. 104 for more explanation.

#include <stdio.h>

int main(void)
{
	int Fibonacci[15];
	int i;

	Fibonacci[0] = 0; // by definition
	Fibonacci[1] = 1; // ditto

// When i is equal to 2, and less than 15,
// increment by one.
// This is will output numbers 2-14

	for(i = 2; i < 15; ++i)
// Fibonacci[2-14] = the sum of the two preceding fibonacci numbers.
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

// When i is equal to zero and less than 15,
// increment by one...
// AND
	for(i = 0; i < 15; ++i)
// Print the Fibonacci[i]
		printf("%i\n", Fibonacci[i]);

	return 0;
}

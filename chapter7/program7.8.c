// Generate Fibonacci numbers using variable length arrays

#include <stdio.h>

int main (void)
{
	int i;
	int numFibs;

	printf("How many Fibonacci numbers do you want (between 1 and 75)? ");
	scanf ("%i", &numFibs);

	// if the integer assigned to numFibs is less than one
	// OR
	// it's less than seventy-five,
	// Print this.

	if (numFibs < 1 || numFibs > 75)
	{
		printf("Bad number, sorry!\n");
		return 1;
	}

	unsigned long long int  Fibonacci[numFibs];

	Fibonacci[0] = 0;        // by definition
	Fibonacci[1] = 1;        // ditto

	for ( i = 2; i < numFibs; ++i )
	// This is the fibonacci formula.
		Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];

	for ( i = 0; i < numFibs; ++i )
		printf("%llu  ", Fibonacci[i]);

	printf("\n");

	return 0;
}

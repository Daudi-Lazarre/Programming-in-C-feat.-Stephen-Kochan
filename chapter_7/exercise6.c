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

	for(i = 2; i < 15; i++)
	{
		fibnum1 = i-2;
		fibnum2 = i-1;
		currentfibnum = fibnum1 + fibnum2;
		printf("%i\n", currentfibnum);
	}

	return 0;
}

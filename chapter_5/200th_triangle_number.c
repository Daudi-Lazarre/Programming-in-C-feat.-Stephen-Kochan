// Program that calculates the 200th number triangular number
// Let's dissect how exactly this works.

#include <stdio.h>

int main(void)
{
	int n, triangularnumber;
	triangularnumber = 0;

	// The integer n is equal to one.
	// Whenever n is less than or equal to 200,
	// n will equal n + 1

	// This means that n will increment by one whenever
	// n is less than 200

	for (n = 1; n <= 200; n = n + 1)
		// The triangular number is equal to that value plus 0.
		triangularnumber = triangularnumber + n;

	printf("The 200th triangular number is %i.\n", triangularnumber);

	return(0);
}

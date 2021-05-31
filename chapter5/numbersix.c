// Replacing the current printf statement with
// printf ("%-2i %i\n", n, triangularNumber);
// see number 6

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

	printf ("%-2i %i\n", n, triangularnumber);

	return(0);
}

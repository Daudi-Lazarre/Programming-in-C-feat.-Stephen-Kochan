// Program to generate a table for the triangular numbers.

#include <stdio.h>

int main(void)

{
	int n, triangularnumber;

	printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf (" n Sum from 1 to n\n");
	printf ("--- ---------------\n");

	triangularNumber = 0;

	for(n = 1; n <= 10; ++n)
	{
		// Just a reminder:
		// += means triangularNumber is equal to
		// triangularNumber plus n
		triangularNumber += n;
		printf (" %i            %i\n", n, triangularNumber);
	}
	return(0);
}

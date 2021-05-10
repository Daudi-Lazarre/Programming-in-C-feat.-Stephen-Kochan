#include <stdio.h>

int main(void)
{
// This formula is used to round an integer to the next largest
// even multiple of another integer.

// Next_multiple = i + j - i % j
// First, let's check off 365 and 7.
// For this, i is equal to the year.
// Also, j is equal to the week.

	int i = 365;
	int j = 7;
	int Next_multiple = i + j - i % j;

	printf("These are the values for the week and year.\n");
	printf("Print base val: %i.\n", i);
	printf("The next largest multiple is %i.\n", Next_multiple);
	return(1);
}

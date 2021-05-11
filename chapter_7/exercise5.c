#include <stdio.h>

int main (void)
{
	// Initializes the ten values in the array
	int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int i, j;

	// Increments the j from 0 to 9
	// ... while incrementing i as long as it's less than j
	// numbers j then equals the sum of both integers.
	// This nested for loops essentially says that
	// numbers = n + n
	// Doubling the amount
	// it starts with the number one because the inner for loop
	// would then be set to zero to be less than the outer for loop
	// which is one.
	for ( j = 0; j < 10; ++j )
		for ( i = 0; i < j; ++i )
			numbers[j] += numbers[i];

	// Print the sum of both integers as long as j is
	// between 0 and 9.
	for ( j = 0; j < 10; ++j )
		printf("%i ", numbers[j]);

	printf("\n");

	return 0;
}

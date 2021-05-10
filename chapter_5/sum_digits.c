#include <stdio.h>

// Write a program that calculates the sum of the digits of an integer.
// For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.

int main()
{
	int n;
	int sum = 0;
	int mod;

	printf("Enter a number so I can print the sum of the digits.\n");
	scanf("%i.\n", &n);

	// My thoughts on how to go about this:
	// Get the modulus of the number
	// Add the modulus

	while(n > 0)
	{
		mod = n % 10;
		sum = sum + mod;
		n = n / 10;
	}
	printf("The sum is equal to %i.\n", sum);
	return(0);
}

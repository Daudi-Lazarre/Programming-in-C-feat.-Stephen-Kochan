// Modified program to generate prime numbers

#include <stdio.h>
#include <stdbool.h>

int main (void)

{
	int p;
	int i;
	int primes[50];
	int primeIndex = 2;

	bool isPrime;

	// The values of two and three are stored
	// in the arrays of zero and one respectively.
	primes[0] = 2;
	primes[1] = 3;

	// When p is equal to five and less than fifty,
	// p = p+2
	for ( p = 5; p <= 50; p = p + 2 )
	{
		// The number is prime.
		isPrime = true;

		// The expression p / primes[i] >= primes[i]
		// is used in the innermost for loop as a test to ensure that
		// the value of p does not exceed the square root of primes[i]
		for ( i = 1; isPrime && p / primes[i] >= primes[i]; ++i )
			if (p % primes[i] == 0 )
				isPrime = false;

		if (isPrime == true ) {
			primes[primeIndex] = p;
			++primeIndex;
		}
	}

	for ( i = 0; i < primeIndex; ++i )
		printf("%i ", primes[i]);

	printf("\n");

	return 0;
}

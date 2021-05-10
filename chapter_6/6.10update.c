// Program to generate a table of prime numbers

// Two changes:

// This inefficiency could be avoided by adding a test for the value of isPrime
// in the conditions of the for loop.

// The for loop could be set up to continue as long as no divisor
// was found and the value of d was less than p.

#include <stdio.h>

int main (void)
{
    int     p, d;
    _Bool   isPrime;

    for ( p = 2; p <= 50; ++p )
    {
	    isPrime = 1;

        for ( d = 2; d < p; ++d )
            if ( p % d == 0 )
                isPrime = 0;

            if ( isPrime != 0 )
                printf ("%i  ", p);
    }

    printf ("\n");
    return 0;
}

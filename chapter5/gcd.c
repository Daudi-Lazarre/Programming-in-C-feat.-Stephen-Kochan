/* Program to find the greatest common divisor
of two nonnegative integer values */

#include <stdio.h>

int main (void)

{
	int u, v, temp;
	printf ("Please type in two nonnegative integers.\n");
	scanf ("%i%i", &u, &v);

	while ( v != 0 )
		// When the unknown int v does not equal zero,
	{
		temp = u % v;
		// Temp equals int u modulus int v.
		u = v;
		// int u equals int c
		v = temp;
		// int v equals temp
	}
	printf ("Their greatest common divisor is %i\n", u);
	return 0;
}

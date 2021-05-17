/* Function to find the greatest common divisor of two
nonnegative integer values and to return the result */

#include <stdio.h>

int gcd (int u, int v)
{
	int temp;

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	printf ("%i\n", u);
}
int main(void)
{
	gcd(150, 35);
	gcd(1026, 405);
	gcd(83, 240);

	return 0;
}

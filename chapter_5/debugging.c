#include <stdio.h>

int main(void)
{
	int n;
	int two_to_the_n;

	printf("Table of Exponents: two\n\n");
	printf(" n   n squared\n");
	printf("--- ----------\n");
	two_to_the_n = 1;

	for(n = 0; n <= 10; ++n)
	{
		printf("%2i      %i\n", n, two_to_the_n);
		two_to_the_n *= 2;
	}
	return 0;
}

#include <stdio.h>

int main(void)
{
	int i = 12258;
	int j = 23;
	long long int Next_multiple = i + j - i % j;

	printf("These are the values for the second variables.\n");
	printf("Print base val: %i.\n", i);
	printf("The next largest multiple is %lli.\n", Next_multiple);
	return(1);
}

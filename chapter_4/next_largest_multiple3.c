#include <stdio.h>

int main(void)
{
	int i = 996;
	int j = 4;

	int Next_multiple = i + j - i % j;

	printf("These are the values for the third variables.\n");
	printf("Print base val: %i.\n", i);
	printf("The next largest multiple is %i.\n", Next_multiple);
	return(1);
}

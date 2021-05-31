// I decided to write the program before even looking at it.
// The goal is to create a program that determines whether or not
// a number is even.

#include <stdio.h>

int main()
{
	int number_entered;
	int outcome;

	printf("Enter a number to find out if it is even.\n");
	scanf("%i", &number_entered);

	outcome = number_entered % 2;

	if(outcome == 0)
	{
		printf("The number %i is an even number.\n", number_entered);
		printf("The remainder of %i is %i.\n", number_entered, outcome);
	}
		else
		{
			printf("%i is an odd number.\n", number_entered);
			printf("The remainder is %i.\n", outcome);
		}

	return(1);
}

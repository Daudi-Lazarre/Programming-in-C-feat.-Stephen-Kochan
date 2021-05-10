// Program to reverse the digits of a number

#include <stdio.h>

int main(void)
{
	int number, right_digit;
	printf("Enter your number.\n"); scanf("%i", &number);

	do
// While everything in the do statement is true,
	{
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}
		while(number != 0);
// Run this epxression in the while loop.

		printf("\n");
		return(0);
}

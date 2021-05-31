// Make a program that correctly prints negative numbers in reverse.

#include <stdio.h>

int main(void)
{
	int number;
	int right_digit;
	char negative;

	printf("Enter your number.\n");
	scanf("%c%i", &negative, &number);

	do
// While everything in the do statement is true,
	{
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}
		while(number != 0);
// Run this epxression in the while loop.

	printf("%c\n", negative);
		return(0);
}

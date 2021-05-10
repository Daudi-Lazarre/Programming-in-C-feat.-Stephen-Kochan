// Program to reverse the digits of a number

#include <stdio.h>
int main(void)
{
	int number, right_digit;

	printf("Enter your number.\n");

	// Remember the ampersand:
	// This allows the user to type a number into the program.

	scanf("%i", &number);

	// When the number the user types in is not equal to zero,
	// right_digit is equal to whatever number the user typed in, mod 10
	// NOTE: mod 10 is how the last digit is found!
	while(number != 0)
	{
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}

printf ("\n");
return 0;
}

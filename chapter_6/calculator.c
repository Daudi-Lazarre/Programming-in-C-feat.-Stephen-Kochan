#include <stdio.h>

// Write a program that acts as a printing calculator.
int main()
{
	int accumulator;
	int num2;
	char ASMD;

	printf("Beep boop. I am computer. Give me the math.\n");

	// Type in the number, operator and number.
	scanf("%i %c %i", &accumulator, &ASMD, &num2);

	// Cycle through these operators when appropriate:
	switch(ASMD)
	{
	case '+':
		printf("The sum is equal to: %i.", accumulator + num2);
		break;

	case '-':
		printf("The difference is equal to: %i.", accumulator - num2);
		break;

	case '*':
		printf("The product is equal to: %i.", accumulator * num2);
		break;

	case '/':
		printf("The divided is equal to: %i.", accumulator / num2);
	}
	return(0);
}

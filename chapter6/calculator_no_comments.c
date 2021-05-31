#include <stdio.h>

int main()
{
	int accumulator;
	int num2;
	char ASMD;

	printf("Hey there, user! Type in all the maths.\n");


	scanf("%i %c %i", &accumulator, &ASMD, &num2);

	switch(ASMD)
	{
	case '+':
		printf("The sum of your entry is %i.\n", accumulator + num2);
		break;

	case '-':
		printf("The difference of your ");
		printf("entry is %i.\n", accumulator - num2);
		break;

	case '*':
		printf("The product of your entry is ");
		printf("%i.\n", accumulator * num2);
		break;

	case '/':
		printf("The quotient of your entry is ");
		printf("%i.\n", accumulator / num2);
		break;
	}
	return(0);
}

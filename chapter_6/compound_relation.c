// Let's say I want the program user to guess a number.
// The correct numbers are less than and equal to 5
// AND more than 0.

#include <stdio.h>

int main()
{
	int i;

	printf("Enter the raffle number!\n");
	scanf("%i", &i);

// This is how we would print that.
// Same thing for the OR operator.

	if(i <= 5 && i > 0)
	{
		printf("Congratulations! You won the raffle!\n");
	}
	else
	{
		printf("Sorry, you lost. *insert sad emoji*\n");
	}

	return(1);
}

// Write a program that calculates the average of
// an array of 10 floating-point values.

#include <stdio.h>

int main(void)
{
// We need a float array
	float sum = 0;
	float numbers[10];
	int i;
	numbers[0] = 5.2;
	numbers[1] = 7.2;
	numbers[2] = 9.2;
	numbers[3] = 11.2;
	numbers[4] = 13.2;
	numbers[5] = 15.2;
	numbers[6] = 17.2;
	numbers[7] = 19.2;
	numbers[8] = 21.2;
	numbers[9] = 23.2;

	// Calculate the average of the array values.
	for(i = 0; i < 10; i++)
	{
		if(i == 0)
		{
			printf("5.2\n");
		}
		else if(i == 1)
		{
			printf("9.2\n");
		}
		else if(i == 2)
		{
			printf("11.2\n");
		}
		else if(i == 3)
		{
			printf("13.2\n");
		}
		else if(i == 4)
		{
			printf("15.2\n");
		}
		else if(i == 5)
		{
			printf("17.2\n");
		}
		else if(i == 6)
		{
			printf("19.2\n");
		}
		else if(i == 7)
		{
			printf("21.2\n");
		}
		else if(i == 8)
		{
			printf("23.2\n");
		}
		else if(i == 9)
		{
			printf("25.2\n");
		}
		else
		{
			printf("Error.");
		}
	}
	printf("These numbers will now be added together.\n");
	printf("Loading...\n");
	// end of foor loop

	// Now the average of the array integers.
	// The average can be put in a formula like this:
	// average = (a + b + c + d) / n
	// n being the number of values in the parentheses

	for(i = 0; i < 10; i++)
		sum += numbers[i];
	printf("The average is %f.\n", sum);
}

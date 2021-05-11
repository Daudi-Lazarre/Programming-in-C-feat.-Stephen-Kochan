// Write a program that calculates the average of
// an array of 10 floating-point values.

#include <stdio.h>

int main(void)
{
// We need a sum
// We need a float array

	float sum;
	float numbers[10];
	int i;
	numbers[0] = 5;
	numbers[1] = 9;
	numbers[2] = 35;
	numbers[3] = 2;
	numbers[4] = 92;
	numbers[5] = 11;
	numbers[6] = 4;
	numbers[7] = 10;
	numbers[8] = 18;
	numbers[9] = 38;

	for(i = 0; i < 10; i++)
	{
		switch(i)
		{
		case '0':
			printf("5\n");
			break;

		case '1':
			printf("9\n");
			break;

	        case '2':
			printf("35\n");

		case '3':
			printf("2\n");
			break;

		case '4':
			printf("92\n");
			break;

	        case '5':
			printf("11\n");
			break;

		case '6':
			printf("4\n");
			break;

	        case '7':
			printf("10\n");
			break;

		case '8':
			printf("18\n");
			break;

		case '9':
			printf("38\n");
			break;
		}
	}
	return(0);




}

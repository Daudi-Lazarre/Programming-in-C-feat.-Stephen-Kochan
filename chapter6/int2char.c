// Write a program that takes an integer keyed in from the terminal
// and extracts and displays each digit
// of the integer in English.

// Shoutout to this guy's github:
// https://github.com/Salamit/programming-in-c-kochan
// I was missing getchar, a technique found on p. 18?
// I was searching for a way to do this with a switch statement,
// but I wasn't sure how to get the num to char, so I used else-if statements.

/*
	if(num == 0)
		printf("zero ");
	else if(num == 1)
		printf("one ");
	else if(num == 2)
		printf("two ");
	else if(num == 3)
		printf("three ");
	else if(num == 4)
		printf("four ");
	else if(num == 5)
		printf("five ");
	else if(num == 6)
		printf("six ");
	else if(num == 7)
		printf("seven ");
	else if(num == 8)
		printf("eight ");
	else if(num == 9)
		printf("nine ");
	else
		printf("\n");
*/

#include <stdio.h>

int main()
{
	int num;
	int right_digit;

	for(right_digit = 0; (num = getchar()) != '\n'; ++right_digit)
	{
		while(right_digit >= 0)
			{
				switch(num)
				{
					case '0':
					printf("Zero ");
					right_digit--;
					break;

					case '1':
					printf("One ");
					right_digit--;
					break;

					case '2':
					printf("Two ");
					right_digit--;
					break;

					case '3':
					printf("Three ");
					right_digit--;
					break;

					case '4':
					printf("Four ");
					right_digit--;
					break;

					case '5':
					printf("Five ");
					right_digit--;
					break;

					case '6':
					printf("Six ");
					right_digit--;
					break;

					case '7':
					printf("Seven ");
					right_digit--;
					break;

					case '8':
					printf("Eight ");
					right_digit--;
					break;

					case '9':
					printf("Nine ");
					right_digit--;
					break;
				}
			}
		}

	printf("\n");

	return(0);
}

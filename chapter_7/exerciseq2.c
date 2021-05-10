// Program demonstrating an array of counters

#include <stdio.h>

int main (void)
{
	int ratingCounters[11];
	int i;
	int response;

	for(i = 1; i <= 10; ++i) //initializes array
		ratingCounters[i] = 0;

	printf("Enter your responses\n");

	if(i)
	{
		scanf("%i", &response);

		// Modify that program so that any
		// number of responses can be entered.
		// Set up the program so that the value 999 can be keyed in
		// by the user to indicate that the last
		// response has been entered.
		printf("Bad response: %i\n", response);

		else if(response = 999)
			printf("The last response has been entered.\n");
		else
			++ratingCounters[response];
	}

	printf("\n\n Rating   Number of Responses\n");
	printf("_______ ___________________\n");

	for ( i = 1; i <= 10; ++i )
		printf("%4i%14i\n", i, ratingCounters[i]);

	return 0;
}

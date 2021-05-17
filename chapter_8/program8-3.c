#include <stdio.h>

void printMessage(void)
{
	printf("Programming is fun.\n");
}
// Establishing the function...
// in this case, printing that message.

int main (void)
{
	int i;
// When i is equal to 1 and is less than 5,
// increment by one AND call the function.
	for(i = 1; i <= 5; ++i)
		printMessage();
	return 0;
}

// Fine...
// Program introducing character arrays.


#include <stdio.h>

int main (void)
{
	// This array called word
	// holds the letters that form the string 'Hello!'
	// Keep in mind that the value of characters is open-ended,
	// so we can make the string as long as we want.

	char word[] = {'H', 'e', 'l', 'l', 'o', '!' };
	int i;

	// When i is zero and less than the amount characters,
	// increment by one.
	// Then print them.
	for ( i = 0; i < 6; ++i )
		printf("%c", word[i]);

	printf("\n");
}

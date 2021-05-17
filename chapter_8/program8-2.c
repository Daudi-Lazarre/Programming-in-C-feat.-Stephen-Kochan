#include <stdio.h>

void printMessage(void)
{
	printf ("Programming is fun.\n");
}

int main (void)
{
	printMessage ();
	printMessage ();
	return 0;
}
// The output of this program is
// "Programming is fun" printed twice
// since the function is called twice.

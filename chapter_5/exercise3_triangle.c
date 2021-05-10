#include <stdio.h>

// This is the secret Krabby patty formula for triangles
// triangularNumber = n (n + 1) / 2

// Write a program that generates a table of triangular numbers
// using the preceding formula. Have the program generate every
// fifth triangular number between
// 5 and 50 (that is, 5, 10, 15, ..., 50).

int main(void)
{
	// Answer from:
	// http://kochananswers.blogspot.com/2013/01/chapter-5.html
	// Slightly modified...
	// I used a for loop before and it didn't go well.

	int n = 5;
	int triangularNumber = 0;

	printf("Every Fifth Triangle Number (TN) From 5 to 50\n\n");
	printf("  Root     TN\n");
	printf("===============\n");

    while ( n <= 50 )
    {
	    // Establishing in the loop what a tri-num is.
	    triangularNumber = n * (n + 1) / 2;
	    // Print n (increments of 5) and tri-num.
	    printf ("   %2i    %4i\n", n,triangularNumber);
	    // At the end of the loop, n increments by five.
	    n = n + 5;
	    // I was definitely overthinking this;
	    // This is very similar to the last problem.
}

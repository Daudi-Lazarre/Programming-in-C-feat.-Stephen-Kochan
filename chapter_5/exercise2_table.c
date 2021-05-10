#include <stdio.h>

// The link for solutions in the book doesn't work,
// so I headed towards github for the answers.
// This is a modified version of the answer found here:
// http://kochananswers.blogspot.com/2013/01/chapter-5.html
// along with explanations.


// Write a program to generate and display a table of n and n^2,
// for integer values of n ranging from 1 to 10.

int main (void)
{
    int n;

    // This prints out the starting part of the chart.
    printf("This is the table to show the numbers.\n");
    printf("n      n^2\n");
    printf("___________\n");

    // This is the actual numbers part.
    // The goal here is to print out a column of n ranging from one to ten
    // while the other colum prints n^2.

    for(n = 1; n < 11; n++)
	    // %2i for double digits to align.
	    // %3i for the triple digits to align.
	    // The first int refers to n
	    // The second digit refers to the second column (n * n).
    {
	     printf("%2i      %3i\n", n, n * n);
    }
    return(1);
    // This didn't come out the same way everyone else's did,
    // ... but my answer is correct.
    // So, I'm leaving it. :)
}

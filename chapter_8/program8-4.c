// Function to calculate the nth triangular number

#include <stdio.h>

void calculateTriangularNumber(int n)
{
	int i, triangularNumber = 0;

// In the case of number 10,
// This adds the numbers 1-10 together.
// Same thing for the other numbers.
	
	for(i = 1; i <= n; ++i)
	triangularNumber += i;
	printf("Triangular number %i is %i\n", n, triangularNumber);
}

// Always need the main function:
// It's where the program starts running!
int main (void)
{
	calculateTriangularNumber(10);
	calculateTriangularNumber(20);
	calculateTriangularNumber(50);
}
return 0;

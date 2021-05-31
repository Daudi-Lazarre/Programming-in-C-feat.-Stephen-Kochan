#include <stdio.h>

int main(void)
{
//	Solve this: 3x^3 - 5x^2 + 6;
//      x = 2.55;

	float x = 2.55;
	float result;
	// I caught myself!
	// Originally had this as an int...
	// This is a float due to the decimal.

	result = (7.65e3 - 12.75e2 + 6);

	printf("When x is equal to %f, the result is %f.\n", x, result);
	return(1);
}

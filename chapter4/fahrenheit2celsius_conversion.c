#include <stdio.h>

int main(void)
{
// The formula given includes fahrenheit as F
// Let's use that to describe the temperature given
	int F = 27;
// This formula includes a decimal point,
// so let's declare it as a float.
	float C = (F - 32) / 1.8;

// %i captures the fahrenheit listed
// %f captures the formula being used to calculate the conversion
// At the end, F and C are included to let the program know
// what values to reference
	printf("%i degrees fahrenheit is equal to %f celsius.\n", F, C);
	return(1);
}

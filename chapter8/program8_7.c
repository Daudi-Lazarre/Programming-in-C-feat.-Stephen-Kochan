/* Function to calculate the absolute value */

#include <stdio.h>

float absoluteValue(float x)
{
// Whatever number is less than zero will come out as negative.
	if ( x < 0 )
		x = -x;

	return x;
}

int main(void)
{
	float f1 = -15.5;
	float f2 = 20.0;
	float f3 = -5.0;
	int il = -716;
	float result;

	// result is equal to the function, which is the negative number.
	result = absoluteValue (f1);
	printf("result = %.2f\n", result);
	printf("f1 = %.2f\n", f1);

	result = absoluteValue (f2) + absoluteValue (f3);
	printf("result = %.2f\n", result);

	result = absoluteValue ( (float) il );
	printf("result = %.2f\n", result);

	result = absoluteValue (il);
	printf("result = %.2f\n", result);

	printf("%.2f\n", absoluteValue (-6.0) / 4 );

	return 0;
}

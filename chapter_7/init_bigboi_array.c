// Program illustrating two types of array-initialization techniques.

#include <stdio.h>

int main (void)
{
// As we can see here, out of the ten slots for values,
// only five are being filled.
	int array_values[10] = { 0, 1, 4, 9, 16 };
	int i;
// when i equals five and is less than zero,
// increment by one
	for ( i = 5; i < 10; ++i )
// All array_values[i] = the integer squared
// I like to think of this as the template for all arrays in the program.
		array_values[i] = i * i;

// when i is zero and less than ten, increment by one.
// This way the values 0 to ten for the array are present.
// When that's true, print this.
	for (i = 0; i < 10; ++i )
		printf("array_values[%i] = %i\n", i, array_values[i]);

	return 0;
}

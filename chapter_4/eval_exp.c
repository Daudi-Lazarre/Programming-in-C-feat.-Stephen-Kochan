#include <stdio.h>

int main(void)
{
	// Solve this: (3.31 x 10-8 x 2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8)

	float part_one = (3.31 * 10-8 * 2.01 * 10-7);
	float part_two = (7.16 * 10-6 + 2.01 * 10-8);
	float div;

	div = (part_one / part_two);
	printf("Part one of the equation is equal to %f.\n", part_one);
	printf("Part two of the equation is equal to %f.\n", part_two);
	printf("The dividend of part one and two is equal to %f.", div);
	return(1);
}

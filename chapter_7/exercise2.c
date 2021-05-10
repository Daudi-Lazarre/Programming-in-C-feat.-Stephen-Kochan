// Program to demonstrate working with an array.

#include <stdio.h>

int main (void)
{
	int values[10];
	int index;

	values[0] = 0; // 197
	values[2] = 0; // -100
	values[5] = 0; // 350
	values[3] = 0; // 557
	values[9] = 0; // 35

	for ( index = 0; index < 10; ++index )
	{
		if(index == 0)
			printf("values[%i] = 197\n", index);
		else if(index == 2)
			printf("values[%i] = -100\n", index);
		else if(index == 5)
			printf("values[%i] = 350\n", index);
		else if(index == 3)
			printf("values[%i] = 557\n", index);
		else if(index == 9)
			printf("values[%i] = 35\n", index);
	}
	return 0;
}

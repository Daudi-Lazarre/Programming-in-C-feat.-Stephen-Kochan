// I was having a problem with the mod returning incorrect values.
// Keep in mind that mod must be initialized after the printf statements.
// For some reason, that worked. (M1 Mac)
#include <stdio.h>

int main(void)
{
// The first part: Ask the user to type in two integers.
    int num1;
    int num2;

    printf("Type in two integer values into the terminal.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    int mod = num1 % num2;
// Test to see if the first number is evenly divisible by the second.

    if(mod == 0)
    {
        printf("%d\n", mod);
        printf("The first number is evenly divisible by the second.\n");
    }
    else
    {
        printf("%d\n", mod);
        printf("The first number is not evenly ");
            printf("divisible by the second.");
    }
    return(0);
}

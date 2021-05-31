#include <stdio.h>

int main(void)
{
    float num1;
    float num2;

// Write a program that accepts two integer values typed in by the user.
    printf("Type in two integer values into the terminal.\n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    float mod = num1 / num2;

// Remember to have the program check for division by zero.
    if(mod == 0)
    {
        printf("%f\n", mod);
        printf("The first number is evenly divisible by the second.\n");
    }
// Display the result of dividing the first integer by the second,
// to three-decimal-place accuracy.
    else
    {
        printf("%0.03f\n", mod);
        printf("The first number is not evenly ");
            printf("divisible by the second.\n");
    }
    return(0);
}

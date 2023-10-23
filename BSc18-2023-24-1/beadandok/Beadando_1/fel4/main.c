#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    int result = 1.0;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int number1;
    int number2;
    
    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("%d raised to the power of %d: %d\n", number1, number2, power(number1, number2));

    return 0;
}

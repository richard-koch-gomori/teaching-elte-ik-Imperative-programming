#include <stdio.h>

int power(int base, int exponent)
{
    /*
    2^3 = 8
    2 * 2 * 2 = 8
    */
    
    int result = 1;
    for (int i = 1; i <= exponent; ++i)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    printf("%d\n", power(3, 8));
    
    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("power = %d\n", power(a, b));
}


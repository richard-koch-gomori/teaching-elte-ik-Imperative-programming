

#include <stdio.h>
#include <stdlib.h>

float power(float base, int exponent)
{
    float result = 1;
    for (int idx = 1; idx <= exponent; idx++)
    {
        result = result * base;
    }
    return result;
}

// negatív kitevõ is megengedett
float power_ex(float base, int exponent)
{
    float result = 1;
    if (base == 0 && exponent == 0) return 0;

    if (exponent > 0)
    {
        result = power(base, exponent);
    }
    else
    {
        result = 1/power(base, abs(exponent));
    }
    return result;
}

int main()
{
    printf("%i\n", abs(-2));
    printf("%f\n", power(5.245, 0));
    printf("%f\n", power_ex(2, -4));
    return 0;
}


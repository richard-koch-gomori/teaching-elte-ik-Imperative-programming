

#include <stdio.h>
#include <math.h>


float nthroot(float A, int n, int x)
{
    float s[64];
    s[0] = 1;
    // miért pont 64?
    // ez így nem szép, késõbb megnézzük hogy lehet ezt szépen megcsinálni
    if (x >= 64)
    {
        return 0;
    }
    for (int k = 0; k <= x; k++)
    {
        s[k + 1] = (1.0/n) * ((n - 1) * s[k] + A/pow(s[k], n - 1));
    }
    return s[x];
}

float nthroot_ex(float A, int n, int x)
{
    float prev = 1;
    float y;
    for (int k = 0; k <= x; k++)
    {
        y = (1.0/n) * ((n - 1) * prev + A/pow(prev, n - 1));
        prev = y;
    }
    return y;
}


int main()
{
    printf("%f\n", nthroot_ex(8, 3, 4));
    return 0;
}




#include <stdio.h>


int main()
{
    printf("Kerek egy szamot: ");
    double a;
    scanf("%lf", &a);
    printf("Kerek egy masik szamot: ");
    double b;
    scanf("%lf", &b);

    double result = a / b;
    printf("a hanyados = %lf\n", result);

    return 0;
}



/*
Feladat: Olvassunk be a billentyűzetről két egész számot,
majd írjuk ki a képernyőre a hányadosukat. Védje ki
a 0-val való osztást.
*/


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
    printf("A hanyados = %lf\n", result);

    return 0;
}



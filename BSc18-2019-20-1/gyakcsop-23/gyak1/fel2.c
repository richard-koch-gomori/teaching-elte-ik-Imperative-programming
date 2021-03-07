

#include <stdio.h>


int main()
{
    //int x; // változódeklaráció; formája: típus változónév;
    //x = 12; // értékadás; formája: változónév = érték;
    //x = 33;
    //printf("Az x változó értéke: %i\n", x);


    //int x;
    //printf("Írjon be egy egész számot: ");
    //scanf("%i", &x);
    //printf("Az x változó értéke: %i\n", x);

    int a, b;
    printf("Írjon be egy számot: ");
    scanf("%i", &a);
    printf("Írjon be egy számot: ");
    scanf("%i", &b);
    //printf("Az összegük: %i\n", a + b);
    int c;
    c = a + b;
    printf("Az összegük: %i\n", c);
    return 0;
}


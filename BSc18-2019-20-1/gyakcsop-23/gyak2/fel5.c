// fordításkor meg kell adni a -lm kapcsolót, hogy a gcc
// linkelni tudjon a math library-vel

// fordítás: gcc fel5.c -o fel5.out -lm


#include <stdio.h>
#include <math.h> // sqrt() miatt


int main()
{
    float a, b, c;
    printf("Írjon be egy oldalt: ");
    scanf("%f", &a);
    printf("Írjon be egy oldalt: ");
    scanf("%f", &b);
    printf("Írjon be egy oldalt: ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        float s = (a + b + c) / 2;
        float t = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Terület: %f \n", t);
    }
    else
    {
        printf("A háromszög nem létezik");
    }

    return 0;
}


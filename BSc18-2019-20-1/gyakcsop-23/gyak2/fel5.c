// fordÌtskor meg kell adni a -lm kapcsolÛt, hogy a gcc
// linkelni tudjon a math library-vel

// fordÌt·s: gcc fel5.c -o fel5.out -lm


#include <stdio.h>
#include <math.h> // sqrt() miatt


int main()
{
    float a, b, c;
    printf("√çrjon be egy oldalt: ");
    scanf("%f", &a);
    printf("√çrjon be egy oldalt: ");
    scanf("%f", &b);
    printf("√çrjon be egy oldalt: ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        float s = (a + b + c) / 2;
        float t = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Ter√ºlet: %f \n", t);
    }
    else
    {
        printf("A h√°romsz√∂g nem l√©tezik");
    }

    return 0;
}


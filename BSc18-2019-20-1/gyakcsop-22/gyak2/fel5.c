// ford�t�skor meg kell adni a -lm kapcsol�t, hogy a gcc
// linkelni tudjon a math library-vel

// ford�t�s: gcc fel5.c -o fel5.out -lm


#include <stdio.h>
#include <math.h>


int main()
{
    float a, b, c;
    printf("Oldal : ");
    scanf("%f", &a);
    printf("Oldal : ");
    scanf("%f", &b);
    printf("Oldal : ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        float s = (a + b + c) / 2;
        float t = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Ter�let = %f\n", t);
    }
    else
    {
        printf("Ilyen h�romsz�g nincs");
    }
}


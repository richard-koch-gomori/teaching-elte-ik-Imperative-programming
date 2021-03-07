

#include <stdio.h>


int main()
{
    /*
    float a, b, c, d, e;
    printf("Írjon be egy számot: ");
    scanf("%f", &a);
    printf("Írjon be egy számot: ");
    scanf("%f", &b);
    printf("Írjon be egy számot: ");
    scanf("%f", &c);
    printf("Írjon be egy számot: ");
    scanf("%f", &d);
    printf("Írjon be egy számot: ");
    scanf("%f", &e);

    printf("Átlag = %f\n", (a + b + c + d + e) / 5.0);
    */
    float val[5]; // 5-elemû tömb
    // tömb deklaráció: típus tömbnév[méret];
    // azonos típusú adatok egysége, az egyes adatokat indexeléssel []
    // lehet elérni
    // használható indexek: 0, 1, ..., méret-1

    /*printf("Írjon be egy számot: ");
    scanf("%f", &val[0]);
    printf("Írjon be egy számot: ");
    scanf("%f", &val[1]);
    printf("Írjon be egy számot: ");
    scanf("%f", &val[2]);
    printf("Írjon be egy számot: ");
    scanf("%f", &val[3]);
    printf("Írjon be egy számot: ");
    scanf("%f", &val[4]);*/
    // ehelyett használjunk ciklust

    for (int i = 0; i < 5; i++) // i = 0, 1, 2, 3, 4
    {
        printf("Írjon be egy számot: ");
        scanf("%f", &val[i]);
    }
    printf("Átlag = %f\n", (val[0] + val[1] + val[2] + val[3] + val[4] ) / 5.0);

    return 0;
}


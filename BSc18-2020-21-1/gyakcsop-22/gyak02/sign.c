/*
Feladat: Olvassunk be egy egész számot, és írjuk ki a képernyőre,
hogy az pozitív, negatív vagy nulla.
*/


#include <stdio.h>


int main()
{
    int number;
    printf("Kerek egy szamot: ");
    scanf("%i", &number);

    /*
    if (number < 0)
    {
        printf("negativ\n");
    }
    else
    {
        // meg kell vizsgálni, hogy a number az
        // pozitív-e vagy 0

        if (number > 0)
        {
            printf("pozitiv\n");
        }
        else
        {
            printf("nulla\n");
        }
    }
    */

    // ugyanez else-if szerkezettel
    if (number < 0)
    {
        printf("negativ\n");
    }
    else if (number > 0)
    {
        printf("pozitiv\n");
    }
    else
    {
        printf("nulla\n");
    }

    return 0;
}



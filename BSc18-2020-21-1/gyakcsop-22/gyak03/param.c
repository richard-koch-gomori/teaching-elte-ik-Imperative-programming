/*
Feladat: Készítsen pozitív egész alapú, pozitív egész kitevőjű hatványozó C függvényt.
*/


#include <stdio.h>


// Peszleg Márton megoldása
int hatvany(int alap, int kitevo)
{
    int eredmeny = 1;
    for (int i = 1; i <= kitevo; i++)
    {
        eredmeny = eredmeny*alap;
    }

    // megjegyzés:
    //alap = -100; // nincs hatása a main()-ben lévő a változóra

    return eredmeny;
}


int main()
{
    int a = 2;
    int b = 4;
    printf("2^4 = %i\n", hatvany(a, b));

    //printf("a = %i\n", a); // 2
    //printf("b = %i\n", b); // 4

    return 0;
}



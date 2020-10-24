/*
Feladat: Írjon int változókat felcserélő C függvényt.
*/


#include <stdio.h>


// Vargha Csongor megoldása
void swap_int(int* p1, int* p2)
{
    int csere;
    csere = *p1;
    *p1 = *p2;
    *p2 = csere;
}


int main()
{
    int i = 1;
    int j = -112;

    printf("i = %i\nj = %i\n", i, j);
    swap_int(&i, &j);
    printf("i = %i\nj = %i\n", i, j);
    return 0;
}



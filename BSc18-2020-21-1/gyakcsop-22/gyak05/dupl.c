/*
Feladat: Írjunk C függvényt, amely paraméterként egészeket tartalmazó tömböt fogad és a
tömb mindegyik elemét megszorozza 2-vel.
*/

#include <stdio.h>


void PrintIntArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", array[i]);
    }
}


void dupl(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // a paraméterként kapott tömbök elemei megváltoztathatóak
        array[i] = 2*array[i];
    }
}


int main()
{
    int a[] = {1, 2, 3, 4, 5};
    PrintIntArray(a, 5);
    dupl(a, 5);
    printf("-----------------\n");
    PrintIntArray(a, 5);
    return 0;
}



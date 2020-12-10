/*
Feladat:
Írjon függvényt, amely paraméterként fogad egy egészre mutató pointer-t
és egy darabszámot, majd paraméterben visszaadja a legnagyobb elem mutatóját.
*/


#include <stdio.h>


void maxsearch(int arr[], int size, int** ptr)
{
    int idx = 0;
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > arr[idx])
        {
            idx = i;
        }
    }
    *ptr = &arr[idx];
}


int main()
{
    int a[] = {2, 5, -7};
    int* p;
    maxsearch(a, 3, &p);
    printf("p = %p\nmax elem = %i\n", p, *p);
}



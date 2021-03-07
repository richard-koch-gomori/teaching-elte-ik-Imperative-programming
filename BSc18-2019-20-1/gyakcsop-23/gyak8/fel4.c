

#include <stdio.h>
#include <stdlib.h>


int* maxsearch(int* ptr, int size)
{
    if (size == 0)
    {
        return NULL; // NULL pointer, speciális pointer:
        // azt jelenti, hogy a pointer sehova sem mutat
    }
    int* pmax = ptr;
    for (int i = 1; i < size; ++i)
    {
        //if (*pmax < ptr[i])
        if (*pmax < *(ptr + i))
        {
            pmax = ptr + i;
        }
    }
    return pmax;
}


int main()
{
    int arr[] = {6, 8, -3, 9, 3};
    int* p;

    p = maxsearch(arr, 5);
    if (p != NULL)
    {
        printf("%i\n", *p);
    }

    p = maxsearch(arr, 0);
    if (p != NULL)
    {
        printf("%i\n", *p);
    }

    return 0;
}


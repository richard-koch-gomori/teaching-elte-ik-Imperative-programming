

#include <stdio.h>

#include "func.h"
#include "func.h"


int main()
{
    ParityArray pa;

    /*
    pa.even_idx = 1;
    InsertToParityArray(&pa);
    printf("%i\n", pa.even_idx);
    */

    int res = InitParityArray(&pa, 5);
    if (res == 1)
    {
        printf("Unble to malloc memory\n");
        return 1;
    }

    InsertToParityArray(&pa, 2);
    InsertToParityArray(&pa, 7);
    PrintParityArray(&pa);
    InsertToParityArray(&pa, 1);
    InsertToParityArray(&pa, 9);
    InsertToParityArray(&pa, 4);
    PrintParityArray(&pa);

    printf("------------------------------------------\n");

    ParityArray pa2;
    res = InitParityArray(&pa2, 10);
    if (res == 1)
    {
        printf("Unble to malloc memory\n");
        return 1;
    }
    InsertToParityArray(&pa2, 4);
    InsertToParityArray(&pa2, 6);
    InsertToParityArray(&pa2, 9);
    PrintParityArray(&pa2);

    DisposeParityArray(&pa);
    DisposeParityArray(&pa2);
    return 0;
}


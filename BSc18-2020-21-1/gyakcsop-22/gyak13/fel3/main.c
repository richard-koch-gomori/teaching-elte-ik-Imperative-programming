

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
    InitParityArray(&pa);
    InsertToParityArray(&pa, 2);
    InsertToParityArray(&pa, 7);
    PrintParityArray(&pa);
    InsertToParityArray(&pa, 1);
    InsertToParityArray(&pa, 9);
    InsertToParityArray(&pa, 4);
    PrintParityArray(&pa);

    return 0;
}




#include <stdio.h>

#include "func.h"
#include "func.h"


int main()
{
    /*
    int a[MAX_ARRAY_SIZE] = {2, -1, 9, 1, 7};
    PrintParityArray(a); // 2 9 1 7*/

    int array[MAX_ARRAY_SIZE];
    for (int i = 0; i < MAX_ARRAY_SIZE; ++i)
    {
        array[i] = -1;
    }

    InsertToParityArray(array, 2);
    InsertToParityArray(array, 7);
    PrintParityArray(array);
    InsertToParityArray(array, 1);
    InsertToParityArray(array, 9);
    InsertToParityArray(array, 4);
    PrintParityArray(array);

    return 0;
}


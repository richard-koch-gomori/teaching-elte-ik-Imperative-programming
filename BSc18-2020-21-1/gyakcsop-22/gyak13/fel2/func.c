

#include <stdio.h>

#include "func.h"

int InsertToParityArray(int array[], int item)
{
    static int even_idx = 0; // páros
    static int odd_idx = MAX_ARRAY_SIZE - 1; // páratlan
    if (item < 0 || even_idx > odd_idx)
    {
        return 1;
    }
    if (item % 2 == 0)
    {
        array[even_idx] = item;
        ++even_idx; // even_idx = even_idx + 1
    }
    else
    {
        array[odd_idx] = item;
        --odd_idx; // odd_idx = odd_idx - 1
    }
    return 0;
}

void PrintParityArray(int array[])
{
    for (int i = 0; i < MAX_ARRAY_SIZE; ++i)
    {
        if (array[i] != -1)
        {
            printf("%i ", array[i]);
        }
    }
    printf("\n");
}


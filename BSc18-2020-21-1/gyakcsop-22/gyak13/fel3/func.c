

#include <stdio.h>

#include "func.h"

void InitParityArray(ParityArray* pa)
{
    for (int i = 0; i < MAX_ARRAY_SIZE; ++i)
    {
        pa->data[i] = -1;
    }
    pa->even_idx = 0;
    pa->odd_idx = MAX_ARRAY_SIZE - 1;
}

int InsertToParityArray(ParityArray* pa, int item)
{
    if (item < 0 || pa->even_idx > pa->odd_idx)
    {
        return 1;
    }
    if (item % 2 == 0)
    {
        pa->data[pa->even_idx] = item;
        ++(pa->even_idx); // even_idx = even_idx + 1
    }
    else
    {
        pa->data[pa->odd_idx] = item;
        --(pa->odd_idx); // odd_idx = odd_idx - 1
    }
    return 0;
}

void PrintParityArray(ParityArray* pa)
{
    for (int i = 0; i < MAX_ARRAY_SIZE; ++i)
    {
        if (pa->data[i] != -1)
        {
            printf("%i ", pa->data[i]);
        }
    }
    printf("\n");
}


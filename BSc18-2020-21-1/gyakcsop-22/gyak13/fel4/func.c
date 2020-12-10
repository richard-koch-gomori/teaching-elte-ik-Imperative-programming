

#include <stdio.h>
#include <stdlib.h>

#include "func.h"


int InitParityArray(ParityArray* pa, unsigned int size)
{
    pa->data = malloc(size * sizeof(int));
    if (pa->data == NULL)
    {
        return 1;
    }
    pa->even_idx = 0;
    pa->odd_idx = MAX_ARRAY_SIZE - 1;
    pa->size = size;
    return 0;
}

int InsertToParityArray(ParityArray* pa, int item)
{
    if (pa->even_idx > pa->odd_idx)
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
        if (i < pa->even_idx || i > pa->odd_idx)
        {
            printf("%i ", pa->data[i]);
        }
    }
    printf("\n");
}

void DisposeParityArray(ParityArray* pa)
{
    pa->even_idx = pa->odd_idx = pa->size = 0;
    free(pa->data);
    pa->data = NULL;
}


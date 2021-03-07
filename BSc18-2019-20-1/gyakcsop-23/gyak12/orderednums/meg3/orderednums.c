

#include <stdio.h>
#include <stdlib.h>

#include "orderednums.h"


// a változónevek ebben a programban már nem jók

// az tároló éppen hány sizeof(int) részbõl áll
static int orderednums_MaxElements = 500;

// tárolt int-ek száma
static int orderednums_CurrentSize;

static int* orderednums_pointer;


int orderednums_Initialize()
{
    orderednums_pointer = (int*)calloc(orderednums_MaxElements, sizeof(int));
    if (orderednums_pointer == NULL)
    {
        printf("orderednums_Initialize() error: No available heap memory\n");
        return 1;
    }
    orderednums_CurrentSize = 0;
    return 0;
}

void orderednums_PrintAll()
{
    printf("orderednums_PrintAll():\n");
    for (int idx = 0; idx < orderednums_CurrentSize; idx++)
    {
        printf("%i ", *(orderednums_pointer + idx));
    }
    printf("\n");
}

int orderednums_AddNumber(int num)
{
    if (orderednums_CurrentSize >= orderednums_MaxElements)
    {
        ++orderednums_MaxElements;

        orderednums_pointer = realloc(orderednums_pointer, orderednums_MaxElements * sizeof(int));
        if (orderednums_pointer == NULL)
        {
            printf("orderednums_Initialize() error: No available heap memory\n");
            return 1;
        }

        printf("orderednums_AddNumber(): new memory allocated, orderednums_pointer: %p\n", (void*)orderednums_pointer);
    }

    int* it;
    for (it = orderednums_pointer; it != orderednums_pointer + orderednums_CurrentSize; ++it)
    {
        if (*it >= num)
        {
            break;
        }
    }
    // it oda mutat, ahol a num helye van

    for (int* it2 = orderednums_pointer + orderednums_CurrentSize; it2 - 1 >= orderednums_pointer && *(it2 - 1) >= num; --it2)
    {
        *it2 = *(it2 - 1);
    }

    *it = num;
    ++orderednums_CurrentSize;
    return 0;
}

int orderednums_IsContained(int num)
{
    for (int* it = orderednums_pointer; it < orderednums_pointer + orderednums_CurrentSize; ++it)
    {
        if (*it == num)
        {
            return 1;
        }
    }
    return 0;
}

void orderednums_Finalize()
{
    free(orderednums_pointer);
    orderednums_pointer = NULL;
    orderednums_CurrentSize = -1;
}


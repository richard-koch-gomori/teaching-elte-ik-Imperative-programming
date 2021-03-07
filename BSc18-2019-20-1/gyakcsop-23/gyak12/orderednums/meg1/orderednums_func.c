

#include <stdio.h>
#include <stdlib.h>

#include "orderednums.h"


int orderednums_Initialize()
{
    extern const int orderednums_MaxElements;
    extern int orderednums_CurrentSize;
    extern int* orderednums_pointer;

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
    extern int orderednums_CurrentSize;
    extern int* orderednums_pointer;

    printf("orderednums_PrintAll():\n");
    for (int idx = 0; idx < orderednums_CurrentSize; idx++)
    {
        printf("%i ", *(orderednums_pointer + idx));
    }
    printf("\n");
}

int orderednums_AddNumber(int num)
{
    extern const int orderednums_MaxElements;
    extern int orderednums_CurrentSize;
    extern int* orderednums_pointer;

    if (orderednums_CurrentSize >= orderednums_MaxElements)
    {
        printf("orderednums_AddNumber() error: Container is full\n");
        return 1;
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
    extern int orderednums_CurrentSize;
    extern int* orderednums_pointer;

    for (int* it = orderednums_pointer; it < orderednums_pointer + orderednums_CurrentSize; ++it)
    {
        if (*it == num)
        {
            return 1;
        }
    }
    return 0;
}




#include <stdio.h>

#include "foo.h"


void foo(int arr[], int size, int k, int arr1[], int* s1, int arr2[], int* s2)
{
    int odds = 0;
    int even = 0;
    for (int i = 0; i < k && i < size; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            arr1[even++] = arr[i];
        }
        else
        {
            arr2[odds++] = arr[i];
        }
    }
    *s1 = even;
    *s2 = odds;
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%i, ", arr[i]);
    }
}

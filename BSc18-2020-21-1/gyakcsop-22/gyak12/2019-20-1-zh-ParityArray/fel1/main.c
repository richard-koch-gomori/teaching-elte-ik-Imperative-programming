

#include <stdio.h>

#define MAX_ARRAY_SIZE 5


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


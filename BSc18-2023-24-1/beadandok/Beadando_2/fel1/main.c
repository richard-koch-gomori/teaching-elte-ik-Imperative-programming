

#include <stdio.h>
#include <stdbool.h>

#define MAX_ARRAY_SIZE 10



void PrintParityArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
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
    int array[MAX_ARRAY_SIZE];
    for (int i = 0; i < MAX_ARRAY_SIZE; ++i)
    {
        array[i] = -1;
    }

    PrintParityArray(array, MAX_ARRAY_SIZE);

    int even_idx = 0; // páros
    int odd_idx = MAX_ARRAY_SIZE - 1; // páratlan

    bool input_ok = true;
    for (int i = 0; i < 5; i++)
    {
        int item;
        printf("Enter a positive number: ");
        scanf("%d", &item);

        if (item < 0)
        {
            input_ok = false;
            break; // vagy: printf(hiba) és return 1;
        }
        if (even_idx > odd_idx)
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
    }
    
    if (!input_ok)
    {
        printf("Invalid input!");
    }
    else
    {
        printf("After insert: ");
        PrintParityArray(array, MAX_ARRAY_SIZE);
    }

    return 0;
}







#include <stdio.h>

// a func.h tartalma fordításkor a következõ sor helyére másolódik
#include "func.h"


// a forráskód így szebb, mintha beégetett-, magic number-eket
// használnánnk a kódban; DEST_ARRAY_SIZE beszédesebb, mint annyi h 200
#define ARRAY_SIZE 100
#define DEST_ARRAY_SIZE 200


int main()
{
    int arr1[ARRAY_SIZE];
    int arr2[ARRAY_SIZE];
    int dest[DEST_ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        arr1[i] = i;
        arr2[i] = 2*i;
    }

    CopyOrderedArray(arr1, ARRAY_SIZE, arr2, ARRAY_SIZE, dest);
    for (int i = 0; i < DEST_ARRAY_SIZE; ++i)
    {
        printf("%i ", dest[i]);
    }
}

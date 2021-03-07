

#include <stdio.h>
#include <stdlib.h>

#include "func.h"


#define ARRAY_SIZE 100
#define DEST_ARRAY_SIZE 200


int main()
{
    int* arr1 = malloc(ARRAY_SIZE * sizeof(int));
    if (arr1 == NULL)
    {
        printf("Memory allocation error");
        return 1;
    }

    int* arr2 = malloc(ARRAY_SIZE * sizeof(int));
    if (arr2 == NULL)
    {
        printf("Memory allocation error");
        return 1;
    }

    int* res = malloc(DEST_ARRAY_SIZE * sizeof(int));
    if (res == NULL)
    {
        printf("Memory allocation error");
        return 1;
    }

    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        arr1[i] = i; // arr1[i] == *(arr1 + i)
        arr2[i] = 2*i;
    }

    int newsize;
    // utols� param�ter: a newsize mutat�j�t adjuk �t,
    // a fv a mutat�t derefer�lva meg tudja v�ltoztatni
    // a newsize v�ltoz� tartalm�t
    CopyOrderedArray(arr1, ARRAY_SIZE, arr2, ARRAY_SIZE, res, &newsize);
    for (int i = 0; i < newsize; ++i)
    {
        printf("%i ", res[i]);
    }

    free(arr1);
    free(arr2);
    free(res);

    return 0;
}


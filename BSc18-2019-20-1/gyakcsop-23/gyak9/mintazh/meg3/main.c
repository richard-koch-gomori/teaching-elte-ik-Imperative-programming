

#include <stdio.h>
#include <stdlib.h>

#include "func.h"


#define ARRAY_SIZE 100
#define DEST_ARRAY_SIZE 200


int main()
{
    int* arr1 = (int*)malloc(ARRAY_SIZE * sizeof(int));
    // ha a malloc() fv bármi miatt sikertelen volt (pl nincs
    // elég memória), akkor NULL pointer-t ad vissza
    if (arr1 == NULL)
    {
        printf("Memory alloc failed\n");
        // a main() fv-ben elhelyezett return kif; utasítás
        // hatására a program kif exitkóddal terminál
        // 0 jelenti h minden rendben volt, nemnulla a program
        // abnormális befejezõdését jelenti
        return 1;
    }

    int* arr2 = (int*)malloc(ARRAY_SIZE * sizeof(int));
    if (arr2 == NULL)
    {
        printf("Memory alloc failed\n");
        return 1;
    }

    int* dest = (int*)malloc(DEST_ARRAY_SIZE * sizeof(int));
    if (dest == NULL)
    {
        printf("Memory alloc failed\n");
        return 1;
    }

    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        arr1[i] = i;  // arr1[i] == *(arr1 + i)
        arr2[i] = 2*i;
    }

    CopyOrderedArray(arr1, ARRAY_SIZE, arr2, ARRAY_SIZE, dest);
    for (int i = 0; i < DEST_ARRAY_SIZE; ++i)
    {
        printf("%i ", dest[i]);
    }

    free(arr1);
    free(arr2);
    free(dest);

    return 0;
}

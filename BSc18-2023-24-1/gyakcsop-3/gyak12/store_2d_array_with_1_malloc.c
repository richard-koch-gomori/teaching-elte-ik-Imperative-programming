#include <stdio.h>
#include <stdlib.h>

// 5x10 2d mátrix

int main()
{
    int ROW = 5;
    int COL = 10;

    int* d2array = malloc(ROW * COL * sizeof(int));

    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
        {
            int index = i * COL + j;
            d2array[index] = 0;
        }
    }

    // a szokásos 2dimenziós indexelés működik
    int index;
    index = 1 * COL + 3;
    d2array[index] = 4;
    index = 0 * COL + 4;
    d2array[index] = -10;

    printf("the dynamic 2D array:\n");
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
        {
            int index = i * COL + j;
            printf("%d\t", d2array[index]);
        }
        printf("\n");
    }

    free(d2array);
}


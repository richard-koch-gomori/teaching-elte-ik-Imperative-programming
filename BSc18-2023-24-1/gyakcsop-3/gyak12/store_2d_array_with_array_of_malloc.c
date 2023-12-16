

#include <stdio.h>
#include <stdlib.h>

// 5x10 2d mátrix

int main()
{
    int ROW = 5;
    int COL = 10;

    int** d2array = malloc(sizeof(int*) * ROW);
    for (int i = 0; i < ROW; ++i)
    {
        int* p = malloc(sizeof(int) * COL);
        d2array[i] = p;
    }

    // a szokásos 2dimenziós indexelés működik
    // pll. elérésre
    d2array[1][3] = 4;
    d2array[0][4] = -10;

    /*
    for (i = ...row)
    {
         for (j = ...col)
        {
            d2array[i][j] ...
        }
    }
    */

    printf("%d\n", d2array[1][3]);

    for (int i = 0; i < ROW; ++i)
    {
        free(d2array[i]);
    }
    free(d2array);
}


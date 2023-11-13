// HA arra van szükség, hogy a paraméterként átadott többdimenziós tömb mindkét dimenziójának mérete paraméterezhető legyen.


#include <stdio.h>

void printArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows = 3;
    int cols = 4;
    int data[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int* rowPointers[3];
    for (int i = 0; i < rows; i++)
    {
        rowPointers[i] = data[i]; // Ez ugyanazt jelenti mint: rowPointers[i] = &data[i][0];
    }

    printArray(rowPointers, rows, cols);

    return 0;
}



#include <stdio.h>

#define SIZE 10

void init(int table[SIZE][SIZE]) // TODO hajók számt tároló tömb
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            table[i][j] = 0;
        }
    }
}

void printTable(int table[SIZE][SIZE])
{
    printf("-------------------\n");
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            printf("%d, ", table[i][j]);
        }
        printf("\n");
    }
    printf("-------------------\n");
}

int convert_to_idx(char col_ch)
{
    // 'C' -> 3
    switch (col_ch)
    {
        case 'A': return 0;
        case 'B': return 1;
        case 'C': return 2;
        case 'D': return 3;
        case 'E': return 4;
        case 'F': return 5;
        case 'G': return 6;
        case 'H': return 7;
        case 'I': return 8;
        case 'J': return 9;
        default: return -1;
    }

    /*
    if (col_ch == 'A') return 0;
    else if (col_ch == 'B') return 1;
    ...
    */

    /*
    return col_ch - 'A'; // col_ch=='B' - 'A' // 1
    */
}

void submit(int table[SIZE][SIZE], char col_ch, int row, int ship_len, char orientation)
{
    if (orientation == '|') // függőleges
    {
        printf("col_ch: %c\n", col_ch); // col A-tól kezdődik
        printf("row: %d\n", row); // row 1-től kezddőik

        int row_idx = row - 1; // 0-tól kezdődik
        int col_idx = convert_to_idx(col_ch); // 0-tól kezdődik ; 'C' -> 3
    
        printf("row_idx: %d\n", row_idx);
        printf("col_idx: %d\n", col_idx);
    }
    else // vízszintesen
    {

    }
}

int main()
{
    int table[SIZE][SIZE];
    //int num_of_ship // TODO

    init(table);
    printTable(table);
    submit(table, 'C', 4, 3, '|'); // TODO num of ship
    submit(table, 'I', 2, 3, '|'); // TODO num of ship
}


// játék:
/* A B C D E F G H I J
1  
2  
3  
4      1
5
6    
7
8
9
10
*/

// table mátrix:
/*
 0 1 2 3 4 5 6 7 8 9
0
1
2
3    1
4
5
6
7
8
9
*/

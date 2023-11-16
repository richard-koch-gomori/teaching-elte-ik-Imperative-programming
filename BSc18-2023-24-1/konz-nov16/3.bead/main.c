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
    int row_idx = row - 1; // 0-tól kezdődik
    int col_idx = convert_to_idx(col_ch); // 0-tól kezdődik ; 'C' -> 3

    if (orientation == '|') // függőleges
    {
        printf("col_ch: %c\n", col_ch); // col A-tól kezdődik
        printf("row: %d\n", row); // row 1-től kezddőik

        int row_idx = row - 1; // 0-tól kezdődik
        int col_idx = convert_to_idx(col_ch); // 0-tól kezdődik ; 'C' -> 3
    
        printf("row_idx: %d\n", row_idx);
        printf("col_idx: %d\n", col_idx);

        for (int i = 0; i < ship_len; ++i)
        {
            printf("i = %d\n", i);

            // azt szeretnénk h ez történjen : submit(table, 'C', 4, 3, '|');
            /*
            table[3][2] = 1;
            table[4][2] = 1;
            table[5][2] = 1;
            */


            table[row_idx + i][col_idx] = 1;
        }
    }
    else // vízszintesen
    {
        for (int i = 0; i < ship_len; ++i)
        {
            table[row_idx][col_idx + i] = 1;
        }
    }
}

int main()
{
    int table[SIZE][SIZE];
    //int num_of_ship // TODO

    init(table);
    printTable(table);
    submit(table, 'C', 4, 3, '|'); // TODO num of ship
    printTable(table);
    submit(table, 'D', 1, 4, '_'); // TODO num of ship
    printTable(table);
}


// játék:
/* A B C D E F G H I J
1        1 1 1 1
2  
3  
4      1
5      1
6      1
7
8
9
10
*/

// table mátrix:
/*
 0 1 2 3 4 5 6 7 8 9
0      1 1 1 1  
1              
2              
3    1
4    1
5    1
6
7
8
9
*/

#include <stdio.h>

#define SIZE 10
#define NUM_OF_SIZES 4

void init(int table[SIZE][SIZE], int num_of_ship[NUM_OF_SIZES]) // TODO hajók számt tároló tömb
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            table[i][j] = 0;
        }
    }

    for (int i = 0; i < NUM_OF_SIZES; ++i)
    {
        num_of_ship[i] = 0;
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

/*
-3 : hajó nem jó hosszú
-2 : ütközik más hajóval
-1 : lelóg a pályáról
*/
int submit(int table[SIZE][SIZE], int num_of_ship[NUM_OF_SIZES],
    char col_ch, int row, int ship_len, char orientation)
{
    int row_idx = row - 1; // 0-tól kezdődik
    int col_idx = convert_to_idx(col_ch); // 0-tól kezdődik ; 'C' -> 3

    if (ship_len < 2 || ship_len > 5)
    {
        return -3;
    }
    if (ship_len == 3)
    {
        if (num_of_ship[1] == 2)
        {
            return -3;
        }
    }
    else
    {
        if (num_of_ship[ship_len - 2] == 1)
        {
            return -3;
        }
    }

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

            if (table[row_idx + i][col_idx] == 1) // ütközik hajóval
            {
                return -2;
            }

            if (row_idx + i < 0 || row_idx + i > 9 || col_idx < 0 || col_idx > 9)
            {
                return -1;
            }

            table[row_idx + i][col_idx] = 1;
        }
    }
    else // vízszintesen
    {
        for (int i = 0; i < ship_len; ++i)
        {
            if (table[row_idx][col_idx + i] == 1) // ütközik hajóval
            {
                return -2;
            }
            if (row_idx < 0 || col_idx + i > 9 || row_idx < 0 || col_idx + i > 9)
            {
                return -1;
            }
            table[row_idx][col_idx + i] = 1;
        }
    }

    num_of_ship[ship_len - 2]++;
}

int main()
{
    int table[SIZE][SIZE];

    int num_of_ship[NUM_OF_SIZES];
    // idx 0 : 2 méretű hajóból hány darab van
    // idx 1 : 3 méretű hajóból hány darab van
    // idx 2 : 4 méretű hajóból hány darab van
    // idx 3 : 5 méretű hajóból hány darab van

    init(table, num_of_ship);
    printTable(table);
    submit(table, num_of_ship, 'C', 4, 3, '|'); // TODO num of ship
    printTable(table);
    submit(table, num_of_ship, 'D', 1, 4, '_'); // TODO num of ship
    printTable(table);
}


// játék:
/* A B C D E F G H I J
1        1 1 1 1
2                  1 1 1 1 // nem fér el a pályán
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

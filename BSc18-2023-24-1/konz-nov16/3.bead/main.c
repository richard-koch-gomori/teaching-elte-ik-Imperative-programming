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

void submit(int table[SIZE][SIZE], char col_ch, int row, int ship_len, char orientation)
{

}

int main()
{
    int table[SIZE][SIZE];
    //int num_of_ship // TODO

    init(table);
    printTable(table);
    submit(table, 'C', 4, 3, '|'); // TODO num of ship
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

// mátrix:
/*
 0 1 2 3 4 5 6 7 8 9
01
11
21
3
4
5
6
7
8
9
*/

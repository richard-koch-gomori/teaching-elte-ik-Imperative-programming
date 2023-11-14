#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h> // time()

#define ROW 10
#define COL 20

void init_field(char game[ROW][COL], int init_apple)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; ++j)
        {
            game[i][j] = ' ';
        }
    }

    int count = 0;
    while (count < 10)
    {
        int row;
        int col;
        row = rand() % ROW;
        col = rand() % COL;

        if (game[row][col] == 'a')
        {
            continue;
        }

        game[row][col] = 'a';
        count++;
    }




}

// nem a feladat része, csak fejlesztés közben használom
// h lássuk mi van a tömbben
void debug_print(char game[ROW][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; ++j)
        {
            printf("%c,", game[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    srand(time(NULL));
    //printf("%d\n", rand() % 10);

    char game[ROW][COL];

    init_field(game, 10);

    debug_print(game);
}


/*
   0 1 2 3 4 5 6 7 8 9
0.       a         a  
1.     a  
2.
3.
4.
5.
6.
7.
8.
9.

game[1][2] // 'a'
game[1][3] // ' '

*/
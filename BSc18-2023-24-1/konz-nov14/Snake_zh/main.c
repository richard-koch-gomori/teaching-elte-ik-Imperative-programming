#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h> // time()

#define ROW 10
#define COL 20

#define SNAKE_ROW 9
#define SNAKE_COL 2

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

void init_snake(int snake[SNAKE_ROW][SNAKE_COL])
{
    /*
    snake[0][0] = 0;
    snake[0][1] = 0;

    snake[1][0] = 0;
    snake[1][1] = 1;

    snake[2][0] = 0;
    snake[2][1] = 2;
    */

    // ...

    // ehelyett:
    for (int i = 0; i < SNAKE_ROW; ++i)
    {
        snake[i][0] = 0;
        snake[i][1] = i;
    }
}

// nem a feladat része, csak fejlesztés közben használom
// h lássuk mi van a tömbben
void debug_print(char game[ROW][COL])
{
    printf("debug_print: \n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; ++j)
        {
            printf("%c,", game[i][j]);
        }
        printf("\n");
    }
}

void debug_snake(int snake[SNAKE_ROW][SNAKE_COL])
{
    printf("debug_snake: \n");
    for (int i = 0; i < SNAKE_ROW; i++)
    {
        for (int j = 0; j < SNAKE_COL; ++j)
        {
            printf("%d,", snake[i][j]);
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



    int snake[SNAKE_ROW][SNAKE_COL]; // int snake[9][2];
    init_snake(snake);
    debug_snake(snake);
}


/*
game:
   0 1 2 3 4 5 6 7 8 9
0. k k k k k k k k k 0  
1.     a a  
2.       a
3.
4.
5.
6.
7.
8.
9.

game[1][2] // 'a' // (1,2)
game[1][3] // ' ' // (1,3)




snake:

   0 1
0. 0 0   // itt van a kígyó feje
1. 0 1
2. 0 2
3.
4.
5.
6.
7.
8.



*/
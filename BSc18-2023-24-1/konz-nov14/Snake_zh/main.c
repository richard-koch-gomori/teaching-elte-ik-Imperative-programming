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

void print_game(char game[ROW][COL], int snake[SNAKE_ROW][SNAKE_COL])
{
    char copy[ROW][COL];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; ++j)
        {
            copy[i][j] = game[i][j];
        }
    }

    // kígyó feje van a snake 0. sorában
    copy[snake[0][0]][snake[0][1]] = '8';

    for (int i = 1; i < SNAKE_ROW; ++i)
    {
        copy[snake[i][0]][snake[i][1]] = '0';
    }

    printf("---------------------------\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; ++j)
        {
            printf("%c,", copy[i][j]);
        }
        printf("\n");
    }
    printf("---------------------------\n");
}

int update_snake(char game[ROW][COL], int snake[SNAKE_ROW][SNAKE_COL],
    char ch)
{
    int new_head_row = snake[0][0];
    int new_head_col = snake[0][1];
    if (ch == 'w')
    {
        new_head_row--;
    }
    else if (ch == 's')
    {
        new_head_row++;
    }
    else if (ch == 'a')
    {
        new_head_col--;
    }
    else if (ch == 'd')
    {
        new_head_col++;
    }

    printf("DEBUG: new_head_row=%d, new_head_col=%d\n", new_head_row, new_head_col);

    if (new_head_row < 0 || new_head_row >= ROW ||
        new_head_col < 0 || new_head_col >= COL)
    {
        printf("DEBUG: kilepett a palyarol\n");
        return -1;
    }

    // ha nem léptünk le a pályáról
    // akkor new_head_row new_head_col valid tömb indexek
    char actual = game[new_head_row][new_head_col];
    printf("actual = %c\n", actual);
    if (actual == 'a')
    {
        game[new_head_row][new_head_col] = ' ';
    }

    for (int i = SNAKE_ROW - 1; i > 0; i--)
    {
        snake[i][0] = snake[i - 1][0];
        snake[i][1] = snake[i - 1][1];
    }
    snake[0][0] = new_head_row;
    snake[0][1] = new_head_col;
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
    game[1][0] = 'a';

    debug_print(game);



    int snake[SNAKE_ROW][SNAKE_COL]; // int snake[9][2];
    init_snake(snake);
    debug_snake(snake);


    print_game(game, snake);
    update_snake(game, snake, 's');
    print_game(game, snake);
}


/*
game: (snake-kel együtt)
   0 1 2 3 4 5 6 7 8 9
0. 0 0 0 0 0 0 0 0   
1. 8   a a  
2.       a
3.
4.
5.
6.
7.
8.
9. 

copy:
   0 1 2 ...
0. k k
1.
2.
...

game[1][2] // 'a' // (1,2)
game[1][3] // ' ' // (1,3)

game[0][2] == 'k'



snake (9x2 tömb):

   0 1
0. 1 0   // itt van a kígyó feje, snake[0][0] == 0, snake[0][1] == 0
1. 0 0
2. 0 1   // erre a két elemre így tudok hivatkozni: snake[2][0] == 0 és snake[2][1] == 2
3. 0 2
4. 0 3
5. 0 4
6. 0 5
7. 0 6
8. 0 7



*/

/*
nxn

01234
1
2
3
4
*/


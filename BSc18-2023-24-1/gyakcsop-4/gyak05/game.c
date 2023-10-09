#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_WIN 101

int main()
{
    //const int max_win = 101;
    //max_win = 3;
    srand(time(NULL));
    int win = rand() % MAX_WIN;
    printf("win = %d\n", win);

    //win = rand();
    //printf("win = %d\n", win);


    int choice;
    do
    {
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == win)
        {
            printf("won\n");
        }
        else
        {
            printf("didnt win\n");
        }
    } while (choice != win);
}
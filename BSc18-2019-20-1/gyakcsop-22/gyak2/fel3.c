

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    /*int win;
    srand(time(NULL));
    win = rand() % 100 + 1;
    int choice = -1;
    //printf("win = %i\n", win);
    while (choice != win)
    {
        printf("�rjon be egy tippet: ");
        scanf("%i", &choice);
        if (choice < win)
        {
            printf("A tipp kisebb\n");
        }
        if (choice > win)
        {
            printf("A tipp nagyobb\n");
        }
    }
    printf("Eltal�lta\n");*/

    int win;
    srand(time(NULL));
    win = rand() % 100 + 1;
    int choice;
    //printf("win = %i\n", win);
    do
    {
        printf("�rjon be egy tippet: ");
        scanf("%i", &choice);
        if (choice < win)
        {
            printf("A tipp kisebb\n");
        }
        if (choice > win)
        {
            printf("A tipp nagyobb\n");
        }
    } while(choice != win);
    printf("Eltal�lta\n");
    return 0;
}


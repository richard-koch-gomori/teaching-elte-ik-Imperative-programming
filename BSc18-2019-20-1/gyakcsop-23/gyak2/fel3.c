// a

#include <stdio.h> // printf(), scanf() miatt
#include <stdlib.h> // srand(), rand() miatt
#include <time.h> // time() miatt


/*
while ciklus

int i = 0;
while (i <= 5)
{
    // a {} között megadott utasításokat (ciklusmag) addig ismételi,
    // amíg a while()-ben megadott feltétel (i <= 5) "igaz"
    printf("i = %i\n", i);
    i++;
}
*/


int main()
{
    int win;
    srand(time(NULL)); // a véletlenszám generátor inicializlása az aktuális idõvel

    // a rand() egy nagy véletlen egész számmal tér vissza
    // (egészen konkrétan 0 és RAND_MAX közti értékkel)
    // % 100 miatt a megengedett maradékok: 0, 1, ..., 99
    // + 1 eggyel eltolja ezt, így jön ki: 1, 2, ..., 100
    win = rand() % 100 + 1;

    //printf("win = %i\n", win);
    int choice = 0;
    while (choice != win) // a ciklus vezérlése nem az igazi, késõbb írunk egy jobbat
    {
        printf("Írjon be egy tippet: ");
        scanf("%i", &choice);
        if (choice > win)
        {
            printf("Túl nagy.\n");
        }
        if (choice < win)
        {
            printf("Túl kicsi.\n");
        }
    }
    printf("Eltalálta.\n");

    return 0;
}


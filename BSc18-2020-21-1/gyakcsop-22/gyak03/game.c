/*
Feladat: Készítse el a véletlenszám játékot (Random Guessing Game). A program véletlenszerűen
kiválaszt egy nyerőszámot 1 és 100 között, a felhasználó pedig tippelhet. A beírt tiprről
mondja meg, hogy kevés vagy sok a nyerőszámhoz képest!
*/


#include <stdio.h>  // printf()
#include <stdlib.h> // rand(), srand()
#include <time.h>   // time()


int main()
{
    // a véletlenszám generátort inicializálja az aktuális idővel
    // az aktuális idő egy igen gyakran változó dolog, így a generátor mindig más
    // állapotból indul
    // így a rand() függvény minden programindulásnál különböző értéket ad
    srand(time(NULL));

    /*
    122 % 100 == 22
    56 % 100 == 56
    0 <= rand() % 100 < 100 / +1
    1 <= rand() % 100 + 1 <= 100
    */
    int win = rand() % 100 + 1;
    //printf("%i\n", win);

    /*
    int num;
    printf("Enter a choice: ");
    scanf("%i", &num);
    while (num != win)
    {
        printf("Enter a choice: ");
        scanf("%i", &num);

        if (num > win)
        {
            printf("The choice is bigger than the winner number\n");
        }
        else if (num < win)
        {
            printf("The choice is smaller than the winner number\n");
        }
        else
        {
            printf("You won\n");
        }
    }
    */

    // do-while ciklus:
    /*
    do
    {
        ciklusmag
    }
    while (feltétel);
    // addig hajtja végre a ciklusmagot, amíg a feltétel igaz
    */
    int num;
    do
    {
        printf("Enter a choice: ");
        scanf("%i", &num);

        if (num > win)
        {
            printf("The choice is bigger than the winner number\n");
        }
        else if (num < win)
        {
            printf("The choice is smaller than the winner number\n");
        }
        else
        {
            printf("You won\n");
        }
    } while(num != win);

    return 0;
}



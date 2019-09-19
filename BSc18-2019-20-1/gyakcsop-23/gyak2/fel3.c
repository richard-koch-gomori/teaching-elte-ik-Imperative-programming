// a

#include <stdio.h> // printf(), scanf() miatt
#include <stdlib.h> // srand(), rand() miatt
#include <time.h> // time() miatt


/*
while ciklus

int i = 0;
while (i <= 5)
{
    // a {} k�z�tt megadott utas�t�sokat (ciklusmag) addig ism�teli,
    // am�g a while()-ben megadott felt�tel (i <= 5) "igaz"
    printf("i = %i\n", i);
    i++;
}
*/


int main()
{
    int win;
    srand(time(NULL)); // a v�letlensz�m gener�tor inicializl�sa az aktu�lis id�vel

    // a rand() egy nagy v�letlen eg�sz sz�mmal t�r vissza
    // (eg�szen konkr�tan 0 �s RAND_MAX k�zti �rt�kkel)
    // % 100 miatt a megengedett marad�kok: 0, 1, ..., 99
    // + 1 eggyel eltolja ezt, �gy j�n ki: 1, 2, ..., 100
    win = rand() % 100 + 1;

    //printf("win = %i\n", win);
    int choice = 0;
    while (choice != win) // a ciklus vez�rl�se nem az igazi, k�s�bb �runk egy jobbat
    {
        printf("�rjon be egy tippet: ");
        scanf("%i", &choice);
        if (choice > win)
        {
            printf("T�l nagy.\n");
        }
        if (choice < win)
        {
            printf("T�l kicsi.\n");
        }
    }
    printf("Eltal�lta.\n");

    return 0;
}


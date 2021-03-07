

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



// ./fel7.out arg1 arg2 ... argN; termin�lb�l futtatva a programot a program neve ut�n sz�k�zzel
// megadott adatokat a program megkapja az argv[] t�mbben
// argc: h�ny argumentum van (az els� mindig a program neve)
// a t�mb elemei char-ra mutat� pointer-ek
// haszn�lat: ./fel7.out [min] [max]
int main(int argc, char* argv[]) // mivel els� elemre mutat� pointer-r� alakul, ez�rt ugyanaz mint char** argv
{
    // ha nem megfelel� a program param�terez�se, 1-es exitk�ddal le�ll a program
    if (argc != 3)
    {
        printf("Invalid interval\n");
        return 1;
    }

    int a, b;
    // atoi(s): az s string-et sz�mm� alak�tja
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    int win;
    srand(time(NULL));
    // rand() 0 �s RAND_MAX k�z�tti �rt�kkel t�r vissza
    win = rand() % (b - a + 1) + a;
    int choice;
    printf("win = %i\n", win);
    do
    {
        printf("�rjon be egy tippet: ");
        scanf("%i", &choice);
        if (choice < win)
        {
            printf("A tipp kisebb\n");
        }
        else if (choice > win)
        {
            printf("A tipp nagyobb\n");
        }
    } while(choice != win);

    printf("Eltal�lta\n");
    return 0;
}

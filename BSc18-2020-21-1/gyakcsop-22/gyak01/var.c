#include <stdio.h>


int main() // a program lépéseit írjuk a main()-be, a végrehajtás (programvezérlés) fentről lefelé történik
{
    // kiírja a Hello world-ot a képernyőre, \n miatt újsort kezd utána
    // (n - newline)
    printf("Hello world\n");

    int x; // x: a változó neve, típusa: int (integer - egész)
    x = 12; // mivel x típusa int, x-be egész jellegű értékeket tehetünk

    /*
    változó: egy változóban a változó típusának megfelelő értékeket tárolhatunk
    amikor hivatkozunk egy változóra, a benne tárolt pillanatnyi értéket érjük el
    ha értékadással megváltoztatjuk a változó értékét, akkor eddigi értéke elvész
    */

    printf("%i\n", x); // a %i (i - int) jelenti, hogy egész jellegű értéket szeretnénk kiírni
    x = 20;

    // matematikai kifejezéseket is használhatunk
    x = 40 + 10;
    x = x + 1;

    printf("%i\n", x);

    return 0;
}



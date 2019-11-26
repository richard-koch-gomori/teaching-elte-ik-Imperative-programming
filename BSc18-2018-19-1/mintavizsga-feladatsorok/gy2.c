/*
Írjon függvényt, amely a paraméterként kapott egészeket
tartalmazó tömbön (Python választás esetén listán)
megvalósítja a bináris (logaritmikus) keresést.

A logaritmikus keresés egy monoton növekvõen rendezett tömb
esetén megkeresi valamely adott elem indexét. Az algoritmus
elõször megfelezi a teljes tömböt, megnézi hogy a középen
lévõ elem hogyan viszonyul a keresett értékhez. Ha egyenlõ
vele, készen vagyunk. Ha a középen lévõ elem kisebb mint a
keresett érték, akkor a keresett elem a megfelezett tömb
felsõ részében van, máskülönben az alsó részében.

Ezt a mûködést alkalmazzuk a tömb megfelelõ részére.
Amennyiben a vizsgált rész mérete 0, akkor a keresett érték
nem szerepel a tömbben, ekkor a visszatérési érték legyen -1.

Mutassa be a függvény mûködését.

Példa input 1:
[-2, 0, 5, 7, 11, 15, 23], keressük a 15-ös elemet

Elvárt output 1:
5

Példa input 2:
[-2, 0, 5, 7, 11, 15, 23], keressük a 16-os elemet

Elvárt output 2:
-1
*/


#include <stdio.h>

int binsearch(int item, int array[], int size)
{
    int low, high, middle;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (item < array[middle])
            high = middle - 1;
        else if (item > array[middle])
            low = middle + 1;
        else
            return middle;
    }
    return -1;
}

int main()
{
    int myarr[7] = {-2, 0, 5, 7, 11, 15, 23};
    printf("result: %d\n", binsearch(15, myarr, 7));
    printf("result: %d\n", binsearch(16, myarr, 7));
    return 0;
}

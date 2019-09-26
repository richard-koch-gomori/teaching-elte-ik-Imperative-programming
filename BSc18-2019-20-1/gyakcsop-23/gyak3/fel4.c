

#include <stdio.h>

/*
logaritmikus keres�s
az arr t�mb monoton n�vekv�en rendezett
keress�k a t�mbben az element elem index�t
*/

int logsearch(int arr[], int size, int element)
{
    int low = 0; // low jelenti a vizsg�lt r�szintervallum els� elem�nek index�t
    int high = size - 1; // high jelenti a vizsg�lt r�szintervallum utols� elem�nek index�t
    int middle; // midle minden l�p�sben a vizsg�lt intervallum k�z�ps� elem�nek indexe
    while (low < high) // high - low + 1 > 0 is j� lenne (az intervallum hossza nagyobb mint 0)
    {
        middle = (low + high) / 2;
        if (arr[middle] == element)
        {
            return middle;
        }
        else if (arr[middle] > element)
        {
            // ha a k�z�ps� elem nagyobb mint a keresett elem, akkor a keres�st
            // az intervallum als� fel�ben kell folytatni, teh�t a vizsg�lt r�szintervallum
            // als� hat�ra nem v�ltozik, a fels� hat�ra pedig a felez�pont el�tti index legyen
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }
    return -1; // ha nem tal�ltunk ilyen elemet
}

int main()
{
    int a[] = {2, 4, 6, 10, 15, 20, 21};
    printf("%i\n", logsearch(a, 7, 7));
    return 0;
}


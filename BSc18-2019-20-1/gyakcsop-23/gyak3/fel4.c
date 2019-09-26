

#include <stdio.h>

/*
logaritmikus keresés
az arr tömb monoton növekvõen rendezett
keressük a tömbben az element elem indexét
*/

int logsearch(int arr[], int size, int element)
{
    int low = 0; // low jelenti a vizsgált részintervallum elsõ elemének indexét
    int high = size - 1; // high jelenti a vizsgált részintervallum utolsó elemének indexét
    int middle; // midle minden lépésben a vizsgált intervallum középsõ elemének indexe
    while (low < high) // high - low + 1 > 0 is jó lenne (az intervallum hossza nagyobb mint 0)
    {
        middle = (low + high) / 2;
        if (arr[middle] == element)
        {
            return middle;
        }
        else if (arr[middle] > element)
        {
            // ha a középsõ elem nagyobb mint a keresett elem, akkor a keresést
            // az intervallum alsó felében kell folytatni, tehát a vizsgált részintervallum
            // alsó határa nem változik, a felsõ határa pedig a felezõpont elõtti index legyen
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }
    return -1; // ha nem találtunk ilyen elemet
}

int main()
{
    int a[] = {2, 4, 6, 10, 15, 20, 21};
    printf("%i\n", logsearch(a, 7, 7));
    return 0;
}


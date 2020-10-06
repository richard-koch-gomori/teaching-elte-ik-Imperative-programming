/*
Feladat:

Írjuk ki következő tömb méretét és elemszámát. Számoljuk meg, hogy a numbers[]
tömbben hány nulla, pozitív illetve negatív egész szám van.

int numbers[] = {56, 78, 34, -56, 0, 1, -1, 54, 7, 89, -2, 100, 566, 321523, -3, 87,
0, 36, -1, -45, -25231285, 6, 14, -69, 123, 46747, 234, 7, -235, 346, 1325, -4436, 7457};
*/

#include <stdio.h>


int main()
{
    int numbers[] = {56, 78, 34, -56, 0, 1, -1, 54, 7, 89, -2, 100, 566, 321523, -3, 87,
    0, 36, -1, -45, -25231285, 6, 14, -69, 123, 46747, 234, 7, -235, 346, 1325, -4436, 7457};

    // sizeof(numbers): a numbers tömb hány bájton van tárolva
    // sizeof(numbers[0]): a numbers tömb első eleme hány bájton van tárolva
    // mivel egy tömbben ugyanolyan típusú elemek vannak, ezért
    // sizeof(numbers) / sizeof(numbers[0]) a tömb elmeinek számát (méretét) adja
    long unsigned int items = sizeof(numbers) / sizeof(numbers[0]);
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("sizeof(double): %lu\n", sizeof(double));
    printf("sizeof(numbers): %lu\n", sizeof(numbers));
    printf("number of items in array: %lu\n", items);

    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < items; ++i)
    {
        printf("%i\n", numbers[i]);
        if (numbers[i] < 0)
        {
            neg++;
        }
        else if (numbers[i] > 0)
        {
            pos++;
        }
        else
        {
            zero++;
        }
    }

    printf("pos: %i\nneg: %i\nzero: %i\n", pos, neg, zero);
    return 0;
}



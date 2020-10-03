/*
Feladat: Írjon C programot amely, bekér 5 egész számot, tömbben tárolja őket,
majd kiszámolja a számok összegét.
*/


#include <stdio.h>

// preprocesszor szimbúlum / előfordítói szimbúlum / #define szimbúlum
#define NUMBER_OF_ITEMS 10


int main()
{
    int array[NUMBER_OF_ITEMS];

    // preprocesszor szimbúlum: közönséges search-and-replace fordítási időben
    // NUMBER_OF_ITEMS helyére 10 íródik

    // a kód olvashatósága javul: ha azt írnánk h i < 10, akkor miért éppen 10, honnan jön ez az érték?
    // a NUMBER_OF_ITEMS beszédesebb

    // valamint ha a kódban később 10 helyett mást szeretnénk korlátozásnak,
    // csak egy helyen kell átírni a 10-et

    for (int i = 0; i < NUMBER_OF_ITEMS; ++i)
    {
        printf("Enter an num: ");
        scanf("%i", &array[i]);
    }

    int sum = 0;
    for (int i = 0; i < NUMBER_OF_ITEMS; ++i)
    {
        sum = sum + array[i];
        // sum += array[i];
    }
    printf("Sum: %i\n", sum);

    return 0;
}



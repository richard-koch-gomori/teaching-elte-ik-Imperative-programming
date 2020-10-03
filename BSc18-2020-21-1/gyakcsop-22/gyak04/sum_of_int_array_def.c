/*
Feladat: Írjon C programot amely, bekér 5 egész számot, tömbben tárolja őket,
majd kiszámolja a számok összegét.
*/


#include <stdio.h>


#define NUMBER_OF_ITEMS 10


int main()
{
    int array[NUMBER_OF_ITEMS];

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



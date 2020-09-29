/*
Feladat: Írjon C programot amely, bekér 5 egész számot, tömbben tárolja őket,
majd kiszámolja a számok összegét.
*/


#include <stdio.h>


int main()
{

    // 5 elemű tömb: 5 db int típusú érték tárolására alkalmas
    int array[5];

/*
    // inexelés, 0 : index, 5 méretű a tömb, index: 0, 1, 2, 3, 4
    array[0] = 10;
    array[1] = -2;

    printf("%i\n", array[1]);
    printf("%i\n", array[1000000000]);
*/

    printf("Enter an num: ");
    scanf("%i", &array[0]);

    printf("Enter an num: ");
    scanf("%i", &array[1]);

    printf("Enter an num: ");
    scanf("%i", &array[2]);

    printf("Enter an num: ");
    scanf("%i", &array[3]);

    printf("Enter an num: ");
    scanf("%i", &array[4]);

    printf("Sum: %i\n", array[0] + array[1] + array[2] + array[3] + array[4]);

    return 0;
}



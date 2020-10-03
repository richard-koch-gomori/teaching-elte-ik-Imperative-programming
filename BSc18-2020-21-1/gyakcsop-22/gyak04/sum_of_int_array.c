/*
Feladat: Írjon C programot amely, megkérdezi hogy hány db egész számot szeretnénk összeadni,
majd bekér ennyi db egész számot, tömbben tárolja őket, majd kiszámolja a számok összegét.
*/


#include <stdio.h>

#define MAX_SIZE 10000


int main()
{
    printf("Enter the number of items you want to sum ");
    int num;
    scanf("%i", &num);

    if (num > MAX_SIZE)
    {
        printf("Sorry bro, %i is the max for num\n", MAX_SIZE);
    }
    else
    {
        //int array[num];
        // Improg-ból tilos olyan tömböt lérehozni, aminek a mérete egy másik változó
        // value length array (VLA): egy nem biztonságos konstrukció a C 1999-es változata (szabványa) óta

        int array[MAX_SIZE];

        for (int i = 0; i < num; ++i)
        {
            printf("Enter an num: ");
            scanf("%i", &array[i]);
        }

        int sum = 0;
        for (int i = 0; i < num; ++i)
        {
            sum = sum + array[i];
            // sum += array[i];
        }
        printf("Sum: %i\n", sum);
    }

    return 0;
}



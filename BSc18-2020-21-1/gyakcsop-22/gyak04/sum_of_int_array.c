/*
Feladat: Írjon C programot amely, megkérdezi hogy hány db egész számot szeretnénk összeadni,
majd bekér ennyi db egész számot, tömbben tárolja őket, majd kiszámolja a számok összegét.
*/


#include <stdio.h>


// preprocesszor szimbúlum / előfordítói szimbúlum / #define szimbúlum
#define MAX_SIZE 10000


int main()
{
    printf("Enter the number of items you want to sum ");
    int num;
    scanf("%i", &num);

    // preprocesszor szimbúlum: közönséges search-and-replace fordítási időben
    // MAX_SIZE helyére 10000 íródik
    // a kód olvashatósága javul: ha azt írnánk h num > 10000, akkor miért éppen 10000, honnan jön ez az érték?
    // a MAX_SIZE beszédesebb
    // valamint ha a kódban később 10000 helyett 20000-t szeretnénk korlátozásnak,
    // csak a #define MAX_SIZE 10000 sorban kell átírni a 10000-t 20000-re
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



/*
Feladat: Írjunk C függvényt, amely egy karaktersorozatban tárolt számot egész számmá alakít.

"123" -> 123
*/

#include <stdio.h>
#include <stdlib.h> // atoi


// ilyen konverziós függvény szükséges, pl ha egy sztringben adott
// értékkel számolni szeretnénk
// a "123" sztringgel nem lehet aritmetikai műveleteket végezni,
// a 123 egész számmal igen
// a konverziós függvény sztringet vár, int-tel tér vissza

// karaktertömb (sztring) átvétele mérettel
int StrToInt(char array[], int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", array[i] - '0');
        res = 10 * res + array[i] - '0';
    }
    return res;
}

// karaktertömb (sztring) átvétele méret nélkül
// sztringek esetén nem kötelező átvenni a karaktertömb méretét,
// hiszen a sztringekről tudjuk, hogy \0 karakterrel végződnek
// a \0 karakter ellenőrzésével a konkrét méret ismerete nélkül
// végig tudunk menni a sztring elemein
int StrToInt2(char array[])
{
    int res = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        printf("%i\n", array[i] - '0');
        res = 10 * res + array[i] - '0';
    }
    return res;
}

int main()
{
    char example1[] = "123"; // 1 2 3 \0
    printf("the return value was: %i\n", StrToInt(example1, 3)); // 123

    char example2[] = "5723";
    printf("the return value was: %i\n", StrToInt(example2, 4));

    printf("the return value was: %i\n", StrToInt2(example2));

    printf("the return value was: %i\n", StrToInt2("5711"));

    // az atoi() függvény az stdlib.h függvénykönyvtárban lévő sztring->int konverziós függvény
    // gyakorlás céllal írtunk sajátot, egyébként a könyvtári függvényeket szabad használni
    printf("%i\n", atoi("133"));
    return 0;
}

/*
res = 0
res = 10 * 0 + 1 = 1

res = 1
res = 10 * 1 + 2 = 12

res = 12
res = 10 * 12 + 3 = 123
*/

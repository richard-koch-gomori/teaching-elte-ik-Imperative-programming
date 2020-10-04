/*
Feladat: Írjon C függvényt, amely paraméterként egy egész számot fogad, és visszatér a szám faktoriálisával.

Például, factorial(5) visszatérési értéke 120, mert 1 * 2 * 3 * 4 * 5 = 120.
*/


#include <stdio.h>


int factorial(int num)
{
    int result = 1;
    for (int idx = 1; idx <= num; ++idx) // idx = idx + 1;
    {
        result = result * idx;
    }
    return result;
}


int main()
{
    // 8 bit == 1 bájt
    printf("sizeof(int) = %li\n", sizeof(int));

    int a = 5; // az én gépemen sizeof(int) == 4 -> az int 4 bájton van tárolva, azaz 32 bites
    int b = factorial(a);
    printf("%i\n", b);
    printf("%i\n", factorial(1));
    printf("%i\n", factorial(0));
    return 0;
}



/*
5 : 2 = 2
1

2 : 2 = 1
0

1 : 2 = 0
1

0000 0000 0000 0000 0000 0000 0000 0101 = 1 * 2^0 + 0 * 2^1 + 1 * 2^2 = 1 + 4 = 5
*/



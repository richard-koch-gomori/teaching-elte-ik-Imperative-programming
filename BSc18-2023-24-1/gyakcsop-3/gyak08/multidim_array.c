#include <stdio.h>

// a foo() függvény fogadjon egy 3 soros 5 oszlopos (többdimenziós) tömböt
int foo(int array[3][5]) // beégetjük a méreteket (valójában a 3 elhagyható, az 5 nem, de a ZH teljesítéséhez ezt nem kell érteni, miért)
{
    // a függvényen belül tudjuk h 3 és 5 a tömb méretei
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            printf("i = %d, j = %d, array[i][j] = %d\n", i, j, array[i][j]);
        }
    }
}

int main()
{
    int array[3][5] = {
    { 1, 2, 3, 4, 5 },
    { -10, -20, -30, -40, -50 },
    { 100, 200, 300, 400, 500 }
    };
    foo(array);
}



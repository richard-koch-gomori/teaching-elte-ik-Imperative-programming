

#include <stdio.h>

/*void foo(int a[], int size)
{
    // a paraméterkek értéke megváltoztathatóak
    // tömb esetén az átadott tömb elemei is megváltoznak,
    // egyébként a függvény a paraméterek másolatával dolgozik
    a[0] = 10;
}*/

void double_array(int a[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        a[idx] = 2 * a[idx];
    }
}

int main()
{
    int x[] = {1, 2, 3};
    double_array(x, 3);
    return 0;
}

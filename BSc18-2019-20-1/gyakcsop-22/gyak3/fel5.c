

#include <stdio.h>


int foo(int arr[], int size)
{
    // a param�terek (arr, size) val�j�ban lok�lis v�ltoz�k,
    // szerepelhetnek az �rt�kad�s bal oldal�n
    // a fv azonban az argumentumok m�solat�val dolgozik, �gy a
    // fv-en bel�l �rt�kad�sok nincsenek hat�ssal a fvh�v�skor
    // �tadott v�ltoz�kra
    // az elmondottak nem vonatkoznak t�mb�kre (ld. k�s�bb pointer-ek)
    arr[0] = 1;
    size = 11;
    return 0; // ld. k�s�bb, void fv
}


int double_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
    return 0; // ld. k�s�bb, void fv
}


int main()
{
    int x[4] = {-1, -2, -3, -4};
    int size = 4;
    printf("size = %i\n", size);
    printf("x[0] = %i\n", x[0]);
    foo(x, size);
    printf("size = %i\n", size);
    printf("x[0] = %i\n", x[0]);
}




#include <stdio.h>

/*void foo(int a[], int size)
{
    // a param�terkek �rt�ke megv�ltoztathat�ak
    // t�mb eset�n az �tadott t�mb elemei is megv�ltoznak,
    // egy�bk�nt a f�ggv�ny a param�terek m�solat�val dolgozik
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

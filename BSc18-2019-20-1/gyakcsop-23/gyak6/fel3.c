

#include <stdio.h>


void foo(int numbers[], int size, int* p, int* n, int* z)
{
    // ha a param�ter �gy n�z ki, h int p, akkor a f�ggv�ny a p param�terben
    // a fv h�v�skor �tadott �rt�k m�solat�val dolgozik
    // itt most egy int* pointer-t fogadunk param�terk�nt, a pointer m�sol�dik le
    // ezt a pointer-t derefer�lva az �ltala c�mzett ter�letet �rni tudjuk
    *p = 0;
    *z = 0;
    *n = 0;
    for (int idx = 0; idx < size; ++idx)
    {
        if (numbers[idx] == 0)
        {
            *z = *z + 1;
        }
        else if (numbers[idx] > 0)
        {
            *p = *p + 1;
        }
        else
        {
            *n = *n + 1;
        }
    }
}


int main()
{
    int numbers[] = {1, 3, -5, 0, 0, 7};
    int p, n, z;

    // h�v�skor a p, n, z v�ltoz�kra mutat� pointer-t adunk �t a f�ggv�nynek
    foo(numbers, 6, &p, &n, &z);

    // a f�ggv�nyh�v�s ut�n p, n, z v�ltoz�k �rt�ke megv�ltozott
    printf("p = %i\n, n = %i, z = %i\n", p, n, z);
}


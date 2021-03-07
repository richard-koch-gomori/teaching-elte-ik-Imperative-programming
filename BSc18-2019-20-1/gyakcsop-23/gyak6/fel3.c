

#include <stdio.h>


void foo(int numbers[], int size, int* p, int* n, int* z)
{
    // ha a paraméter úgy néz ki, h int p, akkor a függvény a p paraméterben
    // a fv híváskor átadott érték másolatával dolgozik
    // itt most egy int* pointer-t fogadunk paraméterként, a pointer másolódik le
    // ezt a pointer-t dereferálva az általa címzett területet írni tudjuk
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

    // híváskor a p, n, z változókra mutató pointer-t adunk át a függvénynek
    foo(numbers, 6, &p, &n, &z);

    // a függvényhívás után p, n, z változók értéke megváltozott
    printf("p = %i\n, n = %i, z = %i\n", p, n, z);
}


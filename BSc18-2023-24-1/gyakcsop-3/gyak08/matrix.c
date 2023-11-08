// Készíts egy alprogramot, amely egy paraméterben kapott nxn-es mátrixot feltölt
// az n-es szorzótábla értékeivel. Majd írasd ki a főprogramban az egészet
// a standard kimenetre a következő formátumban: a x b = c,
// ahol a és b a szorzandó elemek, c pedig a mátrixban tárolt érték.

// https://www.taneszkozcentrum.hu/products/full/0049.jpg


#include <stdio.h>

#define N 10

void calculate(int array[][N])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            int first = j + 1;
            int sec = i + 1;
            array[i][j] = first * sec;
        }
    }
}

int main()
{
    int array[N][N];
    calculate(array);
    for (int i = 0; i < N; ++i)
    {
        printf("A %d-es szorzo tabla: \n", i + 1);
        for (int j = 0; j < N; ++j)
        {
            printf("%d * %d = %d\n", j + 1, i + 1, array[i][j]);
        }

        printf("\n\n");
    }
}




#include <stdio.h>


/*
int arr[3][5];
3x5-ös méretû kétdimenziós tömb
szokásos indexeléssel lehet elérni az elemeit: arr[i][j]

konvertálódása pointer-ré: szintén elsõ elemre mutató pointer-ré konvertálódik
de arr valójában egy egydimenziós tömb, aminek minden eleme int-ek 5 elemû tömbje
tehát pl paraméterként átadva arr egy 5-elemû int-ek tömbjére mutató pointer-ré konvertálódik
(azaz int (*)[5] típusú

az arr[3][5] ugyanazt jelenti, mint a *(*(arr + 3) + 5)

paraméterként deklarálva az elsõ dimenziós kivételével minden dimenzió méretét rögzíteni kell
*/



// többdimenziós tömb típus használata helyett vegyük át a tömb elsõ
// elemének címét, és a tömb méreteit, majd számoljuk ki a megfelelõ indexet
// elõnye: tetszõleges méretû tömböt el tudunk érni a függvényen belül
void foo(int* array, int row, int col, double dest[])
{
    for (int i = 0; i < row; ++i)
    {
        double avg = 0;
        for (int j = 0; j < col; ++j)
        {
            avg += array[i * col + j];
        }
        avg /= col;
        dest[i] = avg;
    }
}


int main()
{
    int array[2][3] = {
        {4, 5, 6},
        {-1, -2, -3}
    };
    double d[2];
    foo(&array[0][0], 2, 3, d);
    printf("%lf %lf\n", d[0], d[1]);
}

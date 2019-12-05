

#include <stdio.h>


/*
int arr[3][5];
3x5-�s m�ret� k�tdimenzi�s t�mb
szok�sos indexel�ssel lehet el�rni az elemeit: arr[i][j]

konvert�l�d�sa pointer-r�: szint�n els� elemre mutat� pointer-r� konvert�l�dik
de arr val�j�ban egy egydimenzi�s t�mb, aminek minden eleme int-ek 5 elem� t�mbje
teh�t pl param�terk�nt �tadva arr egy 5-elem� int-ek t�mbj�re mutat� pointer-r� konvert�l�dik
(azaz int (*)[5] t�pus�

az arr[3][5] ugyanazt jelenti, mint a *(*(arr + 3) + 5)

param�terk�nt deklar�lva az els� dimenzi�s kiv�tel�vel minden dimenzi� m�ret�t r�gz�teni kell
*/



// t�bbdimenzi�s t�mb t�pus haszn�lata helyett vegy�k �t a t�mb els�
// elem�nek c�m�t, �s a t�mb m�reteit, majd sz�moljuk ki a megfelel� indexet
// el�nye: tetsz�leges m�ret� t�mb�t el tudunk �rni a f�ggv�nyen bel�l
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

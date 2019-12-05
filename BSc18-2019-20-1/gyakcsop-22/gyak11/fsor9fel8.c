

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
void print(int* arr, int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%i ", arr[i * col + j]);
        }
        printf("\n");
    }
    printf("\n");
}

void foo(int* arr, int row, int col, double res[])
{
    for (int i = 0; i < row; ++i)
    {
        double avg = 0;
        for (int j = 0; j < col; ++j)
        {
            avg += arr[i * col + j];
        }
        avg /= col;
        res[i] = avg;
        //printf("%lf\n", avg);
    }
}


int main()
{
    int arr[5] = {45, -234, 52, 235, 1};
    int arr_d2[2][3] = {
        {1, 2, 3},
        {-1, 0, 1}
    };

    int arr_d3[2][4] = {
        {1, 3, 5, 7},
        {4, 5, 6, 8}
    };

    double a[2];

    //printf("%i\n", arr_d2[1][2]);
    foo(&arr_d2[0][0], 2, 3, a);
    printf("%lf %lf\n", a[0], a[1]);
    foo(&arr_d3[0][0], 2, 4, a);
    printf("%lf %lf\n", a[0], a[1]);
}


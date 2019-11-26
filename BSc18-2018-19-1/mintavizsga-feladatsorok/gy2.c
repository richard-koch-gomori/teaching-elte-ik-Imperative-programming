/*
�rjon f�ggv�nyt, amely a param�terk�nt kapott eg�szeket
tartalmaz� t�mb�n (Python v�laszt�s eset�n list�n)
megval�s�tja a bin�ris (logaritmikus) keres�st.

A logaritmikus keres�s egy monoton n�vekv�en rendezett t�mb
eset�n megkeresi valamely adott elem index�t. Az algoritmus
el�sz�r megfelezi a teljes t�mb�t, megn�zi hogy a k�z�pen
l�v� elem hogyan viszonyul a keresett �rt�khez. Ha egyenl�
vele, k�szen vagyunk. Ha a k�z�pen l�v� elem kisebb mint a
keresett �rt�k, akkor a keresett elem a megfelezett t�mb
fels� r�sz�ben van, m�sk�l�nben az als� r�sz�ben.

Ezt a m�k�d�st alkalmazzuk a t�mb megfelel� r�sz�re.
Amennyiben a vizsg�lt r�sz m�rete 0, akkor a keresett �rt�k
nem szerepel a t�mbben, ekkor a visszat�r�si �rt�k legyen -1.

Mutassa be a f�ggv�ny m�k�d�s�t.

P�lda input 1:
[-2, 0, 5, 7, 11, 15, 23], keress�k a 15-�s elemet

Elv�rt output 1:
5

P�lda input 2:
[-2, 0, 5, 7, 11, 15, 23], keress�k a 16-os elemet

Elv�rt output 2:
-1
*/


#include <stdio.h>

int binsearch(int item, int array[], int size)
{
    int low, high, middle;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (item < array[middle])
            high = middle - 1;
        else if (item > array[middle])
            low = middle + 1;
        else
            return middle;
    }
    return -1;
}

int main()
{
    int myarr[7] = {-2, 0, 5, 7, 11, 15, 23};
    printf("result: %d\n", binsearch(15, myarr, 7));
    printf("result: %d\n", binsearch(16, myarr, 7));
    return 0;
}

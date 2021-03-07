

#include "func.h"


/*
s = 2 2 4 6 7
z = 1 2 3 5 6
sz = 1 2 2 2 3 4 5 6 6 7

duplik�tumok n�lk�l:
sz = 1 2 3 4 5 6 7

amikor a 2 (ill. 6) beker�lt az els� esetben, l�that�, hogy az
el�tte l�v� elem is 2 (ill. 6), mert a t�mb rendezett
*/


void CopyOrderedArray(int s[], int size1, int z[], int size2, int sz[], int* destsize)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int tmp;

    while (i <= size1 - 1 || j <= size2 - 1)
    {
        if (j > size2 - 1 || (i <= size1 - 1 && s[i] <= z[j]))
        {
            tmp = s[i]; // tmp-ben t�roljuk mi a t�mb k�vetkez� lehets�ges eleme
            ++i;
        }
        else
        {
            tmp = z[j];
            ++j;
        }

        // tmp csak akkor ker�lhet be a t�mbbe, ha eddig m�g nem szerepel a t�mbben
        // ez k�t esetben fordulhat el�:
        // vagy � a legels� eleme az eredm�nyt�mbnek
        // vagy � nem a legels� eleme az eredm�nyt�mbbnek �S a t�mb el�z� eleme nem a tmp
        // az ut�bbit az�rt tudjuk, mert a t�mb�k rendezettek

        //if (k == 0 || (k > 0 && sz[k - 1] != tmp)) // k > 0 felesleges
        if (k == 0 || sz[k - 1] != tmp)
        {
            sz[k] = tmp;
            ++k;
        }
    }
    // az eredm�nyt�mb v�gs� m�rete k, hiszen k-val
    // sz�moltuk, hol tartunk az eredm�ny t�mbben
    *destsize = k;
}


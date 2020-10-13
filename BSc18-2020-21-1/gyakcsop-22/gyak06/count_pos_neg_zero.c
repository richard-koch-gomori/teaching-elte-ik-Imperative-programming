/*
Írjon foo() C függvényt, amely egy egészeket tartalmazó tömböt fogad
paraméterként. A függvény számolja meg, hogy a tömbben hány darab pozitív,
negatív illetve nulla szám van. A kapott eredményeket paraméterben adja
vissza.
*/


#include <stdio.h>


// a foo() függvény ppos, pneg, pzero paraméterei int pointer-ek
// így egy int típusú változó memóriacímét kapják meg híváskor
void foo(int numbers[], int size, int* ppos, int* pneg, int* pzero)
{
    // a pointer-t dereferálva a függvény módosíthatja azt a változót,
    // amely memóriacímét híváskor átadták

    *ppos = 0;
    *pneg = 0;
    *pzero = 0;

    for (int i = 0; i < size; ++i)
    {
        if (numbers[i] < 0)
        {
            *pneg = *pneg + 1;
        }
        else if (numbers[i] > 0)
        {
            *ppos = *ppos + 1;
        }
        else
        {
            *pzero = *pzero + 1;
        }
    }
}


int main()
{
    int numbers[] = {56, 78, 34, -56, 0, 1, -1, 54, 7, 89, -2, 100, 566, 321523, -3, 87,
    0, 36, -1, -45, -25231285, 6, 14, -69, 123, 46747, 234, 7, -235, 346, 1325, -4436, 7457};

    int pos;
    int neg;
    int zero;

    // a foo() függvény a pos,neg,zero változókba írja be az eredményét
    // a scanf() hívásnál hasonló meggondolások miatt kellett &i-t írni, ha i-be akartunk int-et beolvasni
    foo(numbers, sizeof(numbers) / sizeof(numbers[0]), &pos, &neg, &zero);

    printf("pos = %i\n", pos);
    printf("neg = %i\n", neg);
    printf("zero = %i\n", zero);

    return 0;
}



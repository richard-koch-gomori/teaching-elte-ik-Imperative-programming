/*
Írjon foo() C függvényt, amely egy egészeket tartalmazó tömböt fogad
paraméterként. A függvény számolja meg, hogy a tömbben hány darab pozitív,
negatív illetve nulla szám van. A kapott eredményeket paraméterben adja
vissza.
*/


#include <stdio.h>

/*
műveleti sorrend

precedencia: a matematikai jellegű "magasabb rendű", zárójelezési sorrend (order of computation)
asszociativitás: zárójelezési sorrend azonos precedencia esetén

https://en.cppreference.com/w/c/language/operator_precedence
*/


void foo(int numbers[], int size, int* ppos, int* pneg, int* pzero)
{
    *ppos = 0;
    *pneg = 0;
    *pzero = 0;

    for (int i = 0; i < size; ++i)
    {
        if (numbers[i] < 0)
        {
            // zárójelek nélküli jelentése: *(pneg++), nekünk nem erre van szükségünk
            // a postfix inkrementálás (++) magasabb rendű mint a dereferálás
            (*pneg)++;
        }
        else if (numbers[i] > 0)
        {
            (*ppos)++;
        }
        else
        {
            (*pzero)++;
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

    foo(numbers, sizeof(numbers) / sizeof(numbers[0]), &pos, &neg, &zero);

    printf("pos = %i\n", pos);
    printf("neg = %i\n", neg);
    printf("zero = %i\n", zero);

    return 0;
}



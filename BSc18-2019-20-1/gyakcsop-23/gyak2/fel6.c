

#include <stdio.h>
#include <math.h>


/* saját függvény készítése

visszatérési_típus függvény_neve(paraméterlista)
{
    utasítások
}

*/

// is_prima() eldönti a paraméterként kapott számról
// h prímszám-e (el�g esetlen, de m�k�dik, k�s�bb �runk egy jobbat)
// visszatérési érték: 0: nem prímszám, 1: prímszám
int is_prime(int a)
{
    if (a == 1 || a == 0) // a 0, 1, 2 sz�mokra nem adna helyes eredm�nyt a ciklus
    {
        return 0; // a fv viszaatérési érték�t határozza meg
    }
    if (a == 2)
    {
        return 1;
    }

    int count = 1; // a count v�ltoz�ban fogjuk t�rolni az oszt�k sz�m�t
    // count LOK�LIS v�ltoz�: csak az is_prime() f�ggv�nyben l�tezik,
    // k�v�lr�l nem �rhet� el

    // megv�laszolatlan k�rd�s: mi�rt kell sqrt(a)-n�l + 1?
    // t�puskonverzi�kn�l visszat�r�nk erre a k�rd�sre
    for (int idx = 2; idx < sqrt(a) + 1; idx++)
    {
        if (a % idx == 0)
        {
            count++;
        }
    }

    if (count == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int a;
    printf("Írjon egy számot: ");
    scanf("%i", &a);
    if (is_prime(a) == 0)
    {
        printf("Nem prímszám\n");
    }
    else
    {
        printf("Prímszám\n");
    }
    if (is_prime(23) == 1)
    {
        printf("A 23 prímszám\n");
    }
    if (is_prime(2) == 1)
    {
        printf("A 2 prímszám\n");
    }

    return 0;
}


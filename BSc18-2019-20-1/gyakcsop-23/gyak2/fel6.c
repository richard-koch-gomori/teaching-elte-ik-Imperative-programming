

#include <stdio.h>
#include <math.h>


/* saj�t f�ggv�ny k�sz�t�se

visszat�r�si_t�pus f�ggv�ny_neve(param�terlista)
{
    utas�t�sok
}

*/

// is_prime() eld�nti a param�terk�nt kapott sz�mr�l
// h pr�msz�m-e (el�g esetlen megold�s, de m�k�dik, k�s�bb �runk egy jobbat)
// visszat�r�si �rt�k: 0: nem pr�msz�m, 1: pr�msz�m
int is_prime(int a)
{
    if (a == 1 || a == 0) // a 0, 1, 2 sz�mokra nem adna helyes eredm�nyt a ciklus
    {
        return 0; // a fv viszaat�r�si �rt�k�t hat�rozza meg
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
    printf("�rjon egy sz�mot: ");
    scanf("%i", &a);
    if (is_prime(a) == 0)
    {
        printf("Nem pr�msz�m\n");
    }
    else
    {
        printf("Pr�msz�m\n");
    }
    if (is_prime(23) == 1)
    {
        printf("A 23 pr�msz�m\n");
    }
    if (is_prime(2) == 1)
    {
        printf("A 2 pr�msz�m\n");
    }

    return 0;
}


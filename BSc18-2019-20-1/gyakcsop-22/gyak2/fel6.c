

#include <stdio.h>
#include <math.h>


/* saj�t f�ggv�ny k�sz�t�se

visszat�r�si_t�pus f�ggv�ny_neve(param�terlista)
{
    utas�t�sok
}

*/


/*
1 2 3 4 5 6 7
i n n n n n i

1 2 3 4 5 6 7 8
i i n i n n n i

ha x|8 akkor y=x/8-ra is y|8
pl x=2, 2|8 ekkor 8/2=4 is 4|8
felesleges 4-re ellen�rizni
hol van a hat�r, amely sz�m ut�n felesleges ellen�rizni?
azaz: melyik az a sz�m 1..8-ban, amire igaz, h 8/x = x
8/x = x
8 = x^2
sqrt(8) = x
*/


// is_prime() eld�nti a param�terk�nt kapott sz�mr�l
// h pr�msz�m-e (el�g esetlen megold�s, de m�k�dik, k�s�bb �runk egy jobbat)
// visszat�r�si �rt�k: 0: nem pr�msz�m, 1: pr�msz�m
int is_prime(int num)
{
    if (num == 0 || num == 1)
    {
        return 0; // a fv viszaat�r�si �rt�k�t hat�rozza meg
    }
    if (num == 2)
    {
        return 1;
    }

    // megv�laszolatlan k�rd�s: mi�rt kell sqrt(a)-n�l + 1?
    // t�puskonverzi�kn�l visszat�r�nk erre a k�rd�sre
    for (int idx = 2; idx < sqrt(num) + 1; idx++)
    {
        if (num % idx == 0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    printf("%i\n", is_prime(22)); // 0
    printf("%i\n", is_prime(23)); // 1
    return 0;
}


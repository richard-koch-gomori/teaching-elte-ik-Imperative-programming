

#include <stdio.h>
#include <math.h>


/* saját függvény készítése

visszatérési_típus függvény_neve(paraméterlista)
{
    utasítások
}

*/

// is_prime() eldönti a paraméterként kapott számról
// h prímszám-e (elég esetlen megoldás, de mûködik, késõbb írunk egy jobbat)
// visszatérési érték: 0: nem prímszám, 1: prímszám
int is_prime(int a)
{
    if (a == 1 || a == 0) // a 0, 1, 2 számokra nem adna helyes eredményt a ciklus
    {
        return 0; // a fv viszaatérési értékét határozza meg
    }
    if (a == 2)
    {
        return 1;
    }

    int count = 1; // a count változóban fogjuk tárolni az osztók számát
    // count LOKÁLIS változó: csak az is_prime() függvényben létezik,
    // kívülrõl nem érhetõ el

    // megválaszolatlan kérdés: miért kell sqrt(a)-nél + 1?
    // típuskonverzióknál visszatérünk erre a kérdésre
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


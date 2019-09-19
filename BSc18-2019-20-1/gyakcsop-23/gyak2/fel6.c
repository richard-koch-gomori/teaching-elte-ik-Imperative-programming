

#include <stdio.h>
#include <math.h>


/* sajÃ¡t fÃ¼ggvÃ©ny kÃ©szÃ­tÃ©se

visszatÃ©rÃ©si_tÃ­pus fÃ¼ggvÃ©ny_neve(paramÃ©terlista)
{
    utasÃ­tÃ¡sok
}

*/

// is_prima() eldÃ¶nti a paramÃ©terkÃ©nt kapott szÃ¡mrÃ³l
// h prÃ­mszÃ¡m-e (elég esetlen, de mûködik, késõbb írunk egy jobbat)
// visszatÃ©rÃ©si Ã©rtÃ©k: 0: nem prÃ­mszÃ¡m, 1: prÃ­mszÃ¡m
int is_prime(int a)
{
    if (a == 1 || a == 0) // a 0, 1, 2 számokra nem adna helyes eredményt a ciklus
    {
        return 0; // a fv viszaatÃ©rÃ©si Ã©rtÃ©két hatÃ¡rozza meg
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
    printf("Ãrjon egy szÃ¡mot: ");
    scanf("%i", &a);
    if (is_prime(a) == 0)
    {
        printf("Nem prÃ­mszÃ¡m\n");
    }
    else
    {
        printf("PrÃ­mszÃ¡m\n");
    }
    if (is_prime(23) == 1)
    {
        printf("A 23 prÃ­mszÃ¡m\n");
    }
    if (is_prime(2) == 1)
    {
        printf("A 2 prÃ­mszÃ¡m\n");
    }

    return 0;
}


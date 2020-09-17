/*
Feladat: Írjuk ki 10 sorba a "hello world" szöveget.
*/


#include <stdio.h>


int main()
{
    int i = 0;
    while (i < 10) // FELTÉTEL
    {
        // ezt a kódblokkot (ciklusmag) addig hajtja végre a while ciklus
        // amíg a FELTÉTEL igaz

        //printf("%i. hello %i world\n", i, 2*i);
        printf("%i. hello world\n", i);
        i = i + 1; // az i-t megnövelése 1-gyel
        //++i; // az i-t megnövelése 1-gyel
    }

    printf("end of program\n");

    return 0;
}



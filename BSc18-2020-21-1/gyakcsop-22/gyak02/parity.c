/*
Feladat: Olvassunk be egy egész számot, és írjuk ki hogy az páros vagy páratlan.
*/


#include <stdio.h>


int main()
{
    printf("Kerek egy egesz szamot: ");
    int number;
    scanf("%i", &number); // %i ugynaz mint %d

    //printf("maradek 2-vel osztva: %i\n", number % 2);
    // feltételes utasítás
    if (number % 2 == 0) // FELTÉTEL
    {
        // ebbe a blokkba kerülnek azok az utasítások,
	// amelyek akkor hajtódjanak végre ha a FELTÉTEL igaz
        printf("paros\n");
    }
    else
    {
        // ebbe a blokkba kerülnek azok az utasítások,
	// amelyek akkor hajtódjanak végre ha a FELTÉTEL hamis
        printf("paratlan\n");
    }

    return 0;
}



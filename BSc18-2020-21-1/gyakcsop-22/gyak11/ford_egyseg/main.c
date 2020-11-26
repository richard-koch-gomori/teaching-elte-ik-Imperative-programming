/*
ez program két fordítási egységből áll: main.c és reverse.c
fordítási egység: olyan forrásfájl, amely önállóan lefordítható
a forrásfájl ilyen szervezésének több előnye is lehet:
- a forráskód strukturáltabb, átláthatóbb
- valamilyen okból nem akarjuk az összes forrásfájlt újrafordítani egyszerre
(pl túl nagy a kódbázis)
- a fordítási egység lefordított binárisa (.o fájl, tárgykód, object file)
a továbbiakban a forráskód megléte nélkül is szerkeszthető (linkelhető)
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING 256

// ebben a fordítási egységben nincs reverse() függvény definiálva, ezért
// a gcc nem fogadná el (hiszen nemlétező függvényeket nem hívhatunk)

// a reverse() függvény definiálása másik fordítási egységben található,
// (amit a compiler ezen fájl fordítása közben nem is lát)

// ahhoz, hogy ez a fájl leforduljon, a fordítónak annyi információra
// van szüksége, hogy a "reverse" nevű függvény void visszatérési típusú,
// és két db char* -ot fogad paraméterként
// az extern kulcsszóval bevezetett függvény fejléc éppen ezt
// közli a fordítóval

// forward declaration, elődeklaráció
extern void reverse(char* str, char* result);


int main()
{
    char str[MAX_STRING];
    printf("Enter a string: ");
    fgets(str, MAX_STRING, stdin);
    char* str2 = malloc(sizeof(char) * strlen(str) + 1);
    if (str2 == NULL)
    {
        printf("Unable to malloc()\n");
        return 1;
    }
    reverse(str, str2);
    printf("reveresed string: %s\n", str2);

    return 0;
}

/*
- a program build-elése egyetlen gcc hívással:

gcc main.c reverse.c -o fel6.out

ilyenkor a main.c és reverse.c állományokból külön-külön keletkezik egy lefordított
tárgykód (ez a folyamatrész a fordítás (compiling)), majd a linker összeszerkeszti
ezt a 2 fájlt egyetlen futtatható programmá (linking)
(a folyamat közben keletkező temporális fájlokat nem látjuk a könyvtárban:
a gcc vagy törli őket, vagy máshol hozza létre)

a gcc program a megfelelő paraméterekkel meghívja a fordítót (cc1) és a linkert (ld)

- a program fordítási egységeinek fordítása külön-külön:

a gcc -c kapcsolójával el lehet érni, hogy a gcc ne linkelje, hanem csak fordítsa
az inputfájlokat

gcc main.c -o main.o -c
gcc reverse.c -o reverse.o -c

így kapunk main.o és reverse.o binárisokat, amelyek még nem futtatható programok
(az ilyen fájloknak általában .o kiterjesztést szoktak adni)

gcc main.o reverse.o -o main.out

a main.out fájl már futtatható bináris
*/
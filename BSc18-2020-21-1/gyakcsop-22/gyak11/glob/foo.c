/*
Feladat:
(a) Készítsen foo néven fordítási egységet, benne counter() néven függvényt,
amely minden híváskor kiírja a képernyőre, hogy éppen hányadik alkalommal
hívták meg azt a függvényt (globális változóval). (b) Oldja meg, hogy az (a)
megoldás változója ne látszódjon ki a fordítási egységből. (c) Oldja meg az
(a) feladatot globális változó használata nélkül.
*/


#include <stdio.h>

// kilátszik az object file-ból
//int count = 0; (a)

// globális static változó: erre a fordítási egységre névre globális, viszont a generált
// fájlból nem látszik ki a count változó
//static int count = 0; (b)


void counter()
{
    // lokális static változó: a fv hívások közben is megõrzi értékét, egyszer inicializálódik
    // a legelsõ fv híváskor
    static int count = 0;
    printf("%i.\n", count);
    ++count;
}



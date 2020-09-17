/*
Feladat: Írjon C programot, amely táblázatos formában a
°C = (5/9) * (°F - 32) képlet alapján
írja ki az összetartozó °F- és °C-fokban mért hőmérsékletet
(-20 °F-től 200 °F-ig).
*/


#include <stdio.h>


int main()
{
    double c;
    double f = -20;

    while (f <= 200)
    {
        c = (5.0/9) * (f - 32);

        // 5/9 esetén egészosztás történik, aminek eredménye 0

        // 5.0/9 esetén a 9-et 9.0-nak értelmezi a fordító
        // (ezt hívják implicit típuskonverziónak/típusátalakításnak)

        printf("fahr: %lf, cel: %lf\n", f, c);
        f = f + 10;
    }

    return 0;
}



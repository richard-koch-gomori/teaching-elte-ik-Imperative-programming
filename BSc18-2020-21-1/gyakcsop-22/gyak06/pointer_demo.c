

/*
MUTATÓ (POINTER)
olyan változó, ami memóriacímet tartalmaz
*/


#include <stdio.h>


int main()
{
    int i = 5;
    int* p; // int* : p egy olyan pointer, amiben egy int típusú változó memóriacímét lehet tárolni
    p = &i; // "címe" művelet (mutatógenerálás): &i visszatér az i változó memóriacímével
            // (pontosabban i-re mutató pointer-rel tér vissza)
            // => p pointer-be az i változó memóriacíme kerül

    // kiírja a p-ben lévő memóriacímet decimális számrendszerben
    // (igen, ez a kód így nem elég biztonságos, most az egyszerűség kedvéért beérjük ezzel)
    printf("p = %lu\n", (unsigned long int)p);

    printf("*p = %i\n", *p); // dereferálás, indirekt hivatkozás: *p azt a memóriaterületet éri el, "amire a p mutat":
    // *p azt a memóriarekeszt éri el, amelyik memóriacímét p tartalmazza

    *p = -10; // mivel p az i memóriacímét tartalmazza, itt az i változó értéke íródik át -10 -re
    printf("i = %i\n", i); // -10

    return 0;
}




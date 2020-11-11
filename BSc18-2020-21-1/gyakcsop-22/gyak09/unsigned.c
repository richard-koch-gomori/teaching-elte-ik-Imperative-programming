

#include <stdio.h>


int main()
{
    unsigned int u = 6;
    int i = -1;
    // előjeles és előjel nélküli értékekkel való műveletvégzés meglepő eredményeket adhat
    // a -1 negatív szám, így kettes komplemensképzéssel tárolódik, ami 1-es bittel kezdődik
    // a -1 implicit előjel nélküli egésszé konvertálódik, így a bitjeit előjel nélküli egészként
    // értelmezve egy nagy pozitív számot kapunk, ami nagyobb mint 6
    if (i > u)
    {
        printf("i is bigger than u\n");
    }
    else
    {
        printf("i is not bigger than u\n");
    }
}


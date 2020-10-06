/*
Feladat: Írjon C függvényt, amely double-ket tartalmazó tömböt fogad,
és visszatér a maximum indexével.
*/

// Morvai Daniel Laszlo megoldása

#include <stdio.h>


// maximumkeresés (legnagyobb elem)
// egy egész típusú segédváltozóban azt tároljuk, hogy éppen melyik indexű elemet
// gondoljuk legnagyobbnak, kezdetben ez legyen a legelső, azaz 0
// végigmegyünk a tömb elemein, és minden elemre megvizsgáljuk,
// hogy az aktuális elem nem-e nagyobb mint az eddig gondolt maximum
// ha nagyobb elemet találunk, az indexét eltesszük a segédváltozóba
int maxsearch(double array[], int size)
{
    int seg = 0;
    for (int i=1; i<size;++i)
    {
        if (array[i]>array[seg])
        {
            seg=i;
        }
    }
    return seg;
}


int main()
{
    double xy[]={1.2,3.14,-1,8.0,9.0};
    printf("%i",maxsearch(xy,5));
    return 0;
}



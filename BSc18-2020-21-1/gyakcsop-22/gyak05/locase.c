/*
Feladat: Készítsen C függvényt, amely a paraméterben átadott karaktert kisbetűssé alakítja.
*/

#include <stdio.h>

/*
'A' értéke valójában egy egész szám (65), az A sorszáma az ASCII kódtáblában
a táblában minden kisbetű-nagybetű pár között a különbség ugyanannyi,
ez pedig éppen 32, ami úgy jön ki hogy: 'a' - 'A'
*/

char locase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 'a' - 'A';
    }
    else
    {
        return ch;
    }
}


int main()
{
    printf("%c\n", locase('A')); // a
    printf("%c\n", locase('a')); // a
}


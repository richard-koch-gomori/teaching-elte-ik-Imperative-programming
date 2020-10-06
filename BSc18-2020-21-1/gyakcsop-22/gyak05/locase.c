/*
Feladat: Készítsen C függvényt, amely a paraméterben átadott karaktert kisbetűssé alakítja.
*/

#include <stdio.h>

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


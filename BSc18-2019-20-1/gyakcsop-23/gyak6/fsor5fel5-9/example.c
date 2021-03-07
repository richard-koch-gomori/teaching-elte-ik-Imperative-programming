

#include <stdio.h>

// #include: a f�jl tartalma ide m�sol�dik ford�t�s k�zben
#include "func_header.h"

// szimbolikus �lland�: ford�t�s k�zben a MAX_STRING hely�re 256 ker�l
// k�z�ns�ges search-and-replace
#define MAX_STRING 256


int main()
{
    char arr[MAX_STRING] = "test1test";
    reverse(arr);
    printf("fel5: %s\n", arr);

    strcount(2, 'F', arr);
    printf("extra feladat: %s\n", arr);

    char arr2[MAX_STRING] = "k�rrrrrterrr";
    squeeze(arr2, 'r');
    printf("fel6: %s\n", arr2);

    printf("fel7: %i\n", strany("test1", "abfzk"));

    char dest[128];
    toStr(123, dest);
    printf("fel8: %s\n", dest);

    expand("alma a-fW b-b a-z", dest);
    printf("fel9: %s\n", dest);
}

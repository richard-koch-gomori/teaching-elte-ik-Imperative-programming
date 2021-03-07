

#include <stdio.h>

// #include: a fájl tartalma ide másolódik fordítás közben
#include "func_header.h"

// szimbolikus állandó: fordítás közben a MAX_STRING helyére 256 kerül
// közönséges search-and-replace
#define MAX_STRING 256


int main()
{
    char arr[MAX_STRING] = "test1test";
    reverse(arr);
    printf("fel5: %s\n", arr);

    strcount(2, 'F', arr);
    printf("extra feladat: %s\n", arr);

    char arr2[MAX_STRING] = "körrrrrterrr";
    squeeze(arr2, 'r');
    printf("fel6: %s\n", arr2);

    printf("fel7: %i\n", strany("test1", "abfzk"));

    char dest[128];
    toStr(123, dest);
    printf("fel8: %s\n", dest);

    expand("alma a-fW b-b a-z", dest);
    printf("fel9: %s\n", dest);
}

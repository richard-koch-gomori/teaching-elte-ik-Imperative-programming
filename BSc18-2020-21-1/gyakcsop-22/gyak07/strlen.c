/*
Írjon C függvényt, amely a paraméterként kapott sztring hosszával tér vissza.

Írjon C függvényt, amely paraméterként egy char* pointer-t fogad, és visszatér
annak a sztringnek a hosszával, amire a pointer mutat. Hívja meg a függvényt
sztringliterállal, tömbben tárolt karaktersorozattal és char* pointer-rel.

Hasonlítsuk össze a tömbös és pointer-es megoldását.
*/


#include <stdio.h>


int strlength(char str[]) // char str[]: a fordító átalakítja a következőre: char* str
{
    int i;
    for (i = 0; str[i] != '\0'; ++i) {} // str[i]: a fordító átalakítja a következőre: *(str + i)
    return i;
}

// Vargha Csongor megoldása
int strlength2(char* ptr)
{
    int i;
    char* tmp = ptr;
    for (i = 0; *tmp != '\0'; ++i)
    {
        tmp = tmp + 1;
    }
    return i;
}

int strlength3(char* ptr)
{
    int i;
    for (i = 0; *ptr != '\0'; ++i)
    {
        ptr++;
    }
    return i;
}


int main()
{
    // karaktertömb létrehozása és inicializálása sztringliterállal:
    // a tömb elemei írhatóak, így ezen sztring elemei megváltoztathatóak
    char s[] = "hello world";

    // karaktertömb létrehozása egy (valószínűleg) nem írható memóriaterületen
    // és az első karakterére mutató pointer tárolása s2-ben
    char* s2 = "hello world2";
    *s2 = 'Q'; // segmentation fault: a program *s2 -t írva valószínűleg egy nem írható memóriaterületre írna

    //char* p = &s[0];
    //printf("%c\n", *p);
    //p = p + 1;
    //printf("%c\n", *p);

    // a tömbök nevei bizonyos kifejezésekben automatikusan átalakulnak első elemre mutató pointer-ré (sőt majdnem mindig, igen kevés kivétel van, amikor ez a konverzió nem megy végbe)
    printf("len = %i\n", strlength(s)); // itt s valójában &s[0] lesz
    printf("len = %i\n", strlength3(&s[0]));
    printf("len = %i\n", strlength2(s2));
    return 0;
}



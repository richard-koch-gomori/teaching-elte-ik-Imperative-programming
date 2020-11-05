/*
(a) Írjon függvényt, amely paraméterként két darab karaterre mutató
pointer-t fogad, és az első pointer által címzett sztringet a második
pointer által címzett területre másolja.

(b) Tegye biztonságossá az (a)-ban megírt függvényt úgy, hogy kivédi azt,
ha a célterület nem elég nagy a forrássztring tárolására.
*/


#include <stdio.h>
#include <string.h>


// dest: destinatination, céltömb
// src: source, forrás
// probléma: ez a megoldás nem ellenõrzi, hogy a *dest valid
// memóriaterületre hivatkozik-e (azaz a dest elegendõõ méretû-e)
/*
void strcopy(char dest[], char source[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        dest[i] = source[i];
        ++i;
    }
    dest[i] = '\0';
}
*/

// pointer aritmetikával
/*
void strcopy(char* dest, char* source)
{
    int i = 0;
    while (*(source + i) != '\0')
    {
        *(dest + i) = *(source + i);
        ++i;
    }
    *(dest + i) = '\0';
}
*/

// ez már jobb: a destsize-ben megadjuk a maximális méretet,
// amely rendelkezésünkre áll
/*
void strcopy(char* dest, int destsize, char* source)
{
    while (*source != '\0' && destsize > 1)
    {
        *dest = *source;
        source++;
        dest++;
        destsize--;
    }
    *dest = '\0';
}
*/

// a ++ és -- operátorok bevihetők kifejezésekbe, tömörebb megoldást eredményezve
// size_t: az int típus nem garantált hogy elég nagy "objektumok" (tömbök etc)
// méretének tárolására
// a size_t típus egy előjel nélküli egész jellegű érték, ami
// garantáltan elég nagy tömbök indexének és objektumok méretének tárolására
void strcopy(char* dest, size_t destsize, char* source)
{
    while ((*dest++ = *source++) != '\0' && destsize-- > 1);
    *dest = '\0';
}


int main()
{
    char str1[6] = "hello";
    char str2[20];
    //printf("Enter a string: ");
    //gets(str1);
    printf("You have entered: %s\n", str1);

    //strncpy(str2, str1, 5 + 1);
    //printf("str2: %s\n", str2);

    strcopy(str2, 20, "hello world");
    printf("str2: %s\n", str2);

    char* str3;
    strcopy(str3, 20, "hello world");
    printf("str2: %s\n", str3);

/*
    char passwd[64];
    int is_admin = 0;
    printf("Enter password: ");
    gets(passwd);
    if (strcmp(passwd, "foo") == 0)
    {
        is_admin = 1;
    }
    // ...
    if (is_admin)
    {
        printf("blah");
    }
*/

    return 0;
}


// Eddig miért int típust használtunk for ciklusban, ha az utolsó strcopy() függvényen
// rámutattam hogy size_t a korrekt típus?
// A size_t típus használatának vannak olyan részei, amelyek mélyebb meggondolást igényelnek,
// amelynek nincs helye egy bevezető programozás kurzus elején, az int típust egyszerűbb használni,
// továbbá ha tudjuk hogy az int tartománya elég, felesleges a size_t



/*
Feladat: Írjon strlower(dest, str) függvényt, amely az str sztring karaktereit kisbetűssé alakítja,
majd az eredményt dest-ben adja vissza.
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

// const kulcsszó: azt közli a fordítóval, hogy a változó (itt paraméter)
// nem szerepelhet az értékadés bal oldalán
// itt pl arra használjuk, hogy a paraméterként átadott tömb értékét biztosan
// ne változtassa meg a függvény (mert pl. a hívónak még kellhet)
// ezzel illik védeni az olyan paramétereket, amely pl. nem írható területet ér el
void strlower(char dest[], const char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        dest[i] = locase(str[i]);
    }
    dest[i] = '\0';
    //str[0] = 'Q'; // const-tal nem fordul: hiba: str[0] nem szerepelhet az értékadás bal oldalán
}


int main()
{
    //char source[256] = "heLLo worLd"; // heLLo worLd\0
    char dest[256]; // memóriaszemét van benne
    //strlower(dest, source);

    // közvetlenül átadhatunk egy sztringet paraméterként, char char tömböt fogad
    // megjegyzés: ha a const-t törlöm strlower() szignatúrájából és strlower() megkísérli megváltoztatni str-t,
    // akkor ez a program crash-el
    // később megebeszéljük miért
    strlower(dest, "heLLo worLd");
    printf("dest: %s\n", dest);
    //printf("source: %s\n", source);
    return 0;
}



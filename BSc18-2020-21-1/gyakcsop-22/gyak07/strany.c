/*
Feladat: Írjon int strany(str, sample) függvényt, amely visszatér str
legelső olyan indexével, ahol a sample sztring bármelyik karaktere előfordul.
Ha a sample sztring nem szerepel str-ben, a függvény visszatérési értéke -1 legyen.
*/


#include <stdio.h>


/*
str: egy karaktertömb valahanyadik (általában a legelső) elemére mutató pointer
str + i: a pointer-hez hozzáadunk i-t, így tömb esetében az i-vel arrébb lévő elem pointer-jét kapjuk meg
*(str + i): ezt a pointer-t dereferálva magát az elemet kapjuk meg
*/

// Vargha Csongor megoldása
int strany(char* str, char* sample)
{
    int i = 0;
    for (; *(str + i) != '\0'; ++i)
    {
        for (int j = 0; *(sample + j) != '\0'; ++j)
        {
            if (*(str + i) == *(sample + j))
            {
                return i;
            }
        }
    }
    return -1;
}


int main()
{
    printf("%i\n", strany("hello world", "axlx"));
    return 0;
}



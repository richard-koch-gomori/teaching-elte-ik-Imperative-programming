/*
Feladat: Írjon strgen(dest, num, ch) függvényt, amely dest-ben visszaad num darab ch karaktert.
*/


#include <stdio.h>


// dest: destination (cél)
// Széplaki Bence megoldása
void strgen(char dest[], int num, char ch)
{
    int i = 0;
    for (; i < num; i++)
    {
        dest[i] = ch;
    }
    // C-ben a sztringek végén '\0' van
    // mivel most mi állítunk össze egy sztringet, '\0'-t nekünk kell a sztring végére írni
    dest[i] = '\0';
}


int main()
{
    char str[256];
    strgen(str, 4, 'C');
    printf("%s\n", str); // CCCC
    return 0;
}



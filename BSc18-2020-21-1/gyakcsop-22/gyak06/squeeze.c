/*
Feladat: Írjon függvényt, amely a paraméterként átvett karaktersorozatból törli az összes,
szintén paraméterben átvett karaktert, majd az eredményt egy külön paraméterben adja vissza.
*/


#include <stdio.h>


void squeeze(char dest[], const char str[], char ch)
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ch)
        {
            dest[j] = str[i];
            j++;
        }
    }
    dest[j] = '\0';
}


int main()
{
    char str[] = "hello world";
    char dest[256];
    squeeze(dest, str, 'l');
    printf("%s\n", dest); // heo word
    return 0;
}



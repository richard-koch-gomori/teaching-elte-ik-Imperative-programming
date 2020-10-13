/*
Feladat: Írjon függvényt, amely a paraméterként átvett karaktersorozatból törli az összes,
második paraméterben átvett karaktert.
*/


#include <stdio.h>


/*

i = 8
j = 6

heo world\0

*/

void squeeze(char str[], char ch)
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
        }
        else
        {
            printf("i = %i, j = %i; %c\n", i, j, str[i]);
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

void squeeze2(char str[], char ch)
{
    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        // a ch karaktereket nem másoljuk
        // a j változó tartja számon az "eredmény" utolsó karakterének indexét
        // az i-vel pedig az str[]-en megyünk végig
        // a ciklus az str[] j-edik elemébe másolja str[] i-edik elemét
        // az alapötlet az, hogy ha ch-t találunk, akkor j-t nem, de i-t mindig növeljük
        if (str[i] != ch)
        {
            printf("i = %i, j = %i; %c\n", i, j, str[i]);
            str[j++] = str[i];
            // ez a ciklusmag ugyanaz mint:
            //str[j] = str[i];
            //j++;
            // a j++ posfix növelés a növelés előtti értékkel tér vissza (azaz j-vel),
            // ezért bevihető a tömbindexelésbe
            // tömörebb, rövidebb megoldás
        }
        i++;
    }
    // a sztring végét a '\0'-al kell zárni
    str[j] = '\0';
}

int main()
{
    char str[] = "hello world";
    squeeze(str, 'l');
    printf("%s\n", str); // heo word
    return 0;
}



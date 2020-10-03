/*
Feladat: Tárolja karaktertömbként (sztringként) a "Hello world" szöveget,
majd készítsen statisztikát a szövegben előforduló magánhangzókról.
*/


#include <stdio.h>

#define MAX_SIZE 256


int main()
{
/*
    char text[5]; // karakterek tömbe == karaktertömb == sztring (string)
    text[0] = 't';
    text[1] = 'e';
    text[2] = 's';
    text[3] = 't';

    // C-ben a sztringek végén a '\0' karakterrel kell zárni
    // a karaktertömb méretének megadásakor emiatt a +1 karakterrel számolni kell
    text[4] = '\0';

    // karaktertömb inicializálása sztringgel: a megfelelő tömb elembe másolódnak
    // a sztring karakterei, az utolsó elem automatikusan a '\0' karakter
    // ilyenkor elhagyható a tömb mérete a [] jelek között, mert a fordító látja a sztring hosszából
    char text2[] = "test";
*/

    char text[] = "Hello world";

    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;

    // a sztring bejárása: addig lépegetünk előre, amíg el nem érjük a '\0' karaktert
    for (int idx = 0; text[idx] != '\0'; idx++)
    {
/*
        printf("%c\n", text[idx]);
        if (text[idx] == 'a')
        {
            count_a++;
        }
        else  if (text[idx] == 'e')
        {
            count_e++;
        }
        else  if (text[idx] == 'i')
        {
            count_i++;
        }
        else  if (text[idx] == 'o')
        {
            count_o++;
        }
        else  if (text[idx] == 'u')
        {
            count_u++;
        }
*/

        /*
        switch (KIFEJEZÉS)
        {
            case ÉRTÉK1:
            {
                UTASÍTÁSOK1
                break;
            }
            ...
        }

        switch-case vezérlési szerkezet
        ha KIFEJEZÉS értéke ÉRTÉK1, akkor a hozzá tartozó case blokkba írt
        UTASÍTÁS1 hajtódik végre

        a case blokk végén használni célszerű a break; utasítást,
        különben egyezés esetén az összes többi case blokkba írt utasítás végrehajtódik
        annak címkéjétől függetlenül (fallthrough viselkedés)
        */
        switch (text[idx]) // a text[] tömb idx-edik eleme
        {
            case 'a': // ha 'a' karakter, akkor count_a változót növeljük
            {
                count_a++;
                break;
            }
            case 'e':
            {
                count_e++;
                break;
            }
            case 'i':
            {
                count_i++;
                break;
            }
            case 'o':
            {
                count_o++;
                break;
            }
            case 'u':
            {
                count_u++;
                break;
            }
        }
    }

    printf("a: %i\n", count_a);
    printf("e: %i\n", count_e);
    printf("i: %i\n", count_i);
    printf("o: %i\n", count_o);
    printf("u: %i\n", count_u);

    return 0;
}



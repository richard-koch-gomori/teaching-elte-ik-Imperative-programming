/*
�rjon f�ggv�nyt egy sztringben az "[a-z]" alak� r�vid�t�sek
felold�s�ra, teh�t a sztringben a "[a-z]" helyett "abcde...xyz"
szerepeljen. El�g az angol ABC bet�ivel dolgozni.

P�ld�ul a "This is my [f-o] string"-re a helyes output:
"This is my fhijklmno string". Vegye figyelembe, hogy egy sztringben
t�bb r�vid�t�s is lehet, azonban r�vid�t�sen bel�l nem lehet
m�sik r�vid�t�s. Felteheto hogy a [ �s ] karakterek csak ezen
c�lb�l fordulnak el� a sztringben, �s mindegyik r�vid�t�s
helyesen van megadva.

Szeml�ltesse a f�ggv�ny m�k�d�s�t.

P�lda input:
"This is [f-o] to demo [a-z] my [a-b] [b-b] program [b-d]"

Elv�rt output:
"This is fghijklmno to demo abcdefghijklmnopqrstuvwxyz my ab b program bcd"
*/


#include <stdio.h>
#include <string.h>

static const char ABBRV_STARTER_CHAR = '[';
static const int ABBRV_DISTANCE_LOW = 1;
static const int ABBRV_DISTANCE_HIGH = 3;
static const int ABBRV_TOTAL_LEN = 5;

void unpack_short(char dest[], const char source[], int size)
{
    int i = 0;
    int j = 0;
    while (source[i] != '\0')
    {
        if (source[i] == ABBRV_STARTER_CHAR)
        {
            for (char ch = source[i + ABBRV_DISTANCE_LOW]; ch <= source[i + ABBRV_DISTANCE_HIGH]; ++ch)
            {
                dest[j++] = ch;
            }
            i += ABBRV_TOTAL_LEN - 1;
        }
        else
            dest[j++] = source[i];
        ++i;
    }
    dest[j] = '\0';
}

int main()
{
    const char source[] = "This is [f-o] to demo [a-z] my [a-b] [b-b] program [b-d]";
    char dest[256];
    unpack_short(dest, source, strlen(source));
    printf("source: '%s'\ndest: '%s'", source, dest);
    return 0;
}

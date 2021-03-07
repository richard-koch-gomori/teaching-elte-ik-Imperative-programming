

#include <string.h>

#include "func_header.h"


void toStr(int a, char dest[])
{
    int idx=0;

    while (a > 0)
    {
        dest[idx] = a%10 + '0';
        a = a/10;
        idx++;
    }
    dest[idx]='\0';
    reverse(dest);
}

void expand(const char src[], char dest[])
{
    int i = 0; // src-n megy�nk v�gig
    int j = 0; // a dest-ben hol tartunk
    int len = strlen(src);
    while (src[i] != '\0')
    {
        // ha van i+1 -edik t�mbelem �s ha az i+1 -edik karakter a - jel
        if (i + 1 < len && src[i + 1] == '-')
        {
            // az ABC bet�i egym�s ut�n szerepelnek az ASCII t�bl�ban
            for (char ch = src[i]; ch < src[i + 2]; ++ch)
            {
                dest[j] = ch;
                j++;
            }
            i++; // az src-ben �tugorjuk a - jelet, az eredm�nyben a - jelet nem akarjuk l�tni
        }
        else
        {
            dest[j] = src[i];
            j++;
        }
        i++;
    }
    dest[j] = '\0';
}


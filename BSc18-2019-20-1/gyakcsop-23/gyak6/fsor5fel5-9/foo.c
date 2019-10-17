

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
    int i = 0; // src-n megyünk végig
    int j = 0; // a dest-ben hol tartunk
    int len = strlen(src);
    while (src[i] != '\0')
    {
        // ha van i+1 -edik tömbelem és ha az i+1 -edik karakter a - jel
        if (i + 1 < len && src[i + 1] == '-')
        {
            // az ABC betûi egymás után szerepelnek az ASCII táblában
            for (char ch = src[i]; ch < src[i + 2]; ++ch)
            {
                dest[j] = ch;
                j++;
            }
            i++; // az src-ben átugorjuk a - jelet, az eredményben a - jelet nem akarjuk látni
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


// Olvassunk be hexadecimális számokat a standard bemenetről
// (0-9,a,b,c,d,e,f karakterek), amíg EOF nem érkezik.
// A beolvasott számokat konvertáljuk át 10-es számrendszerbe, majd tároljuk őket.

// Használd ki a karakter-szám "átjárhatóságot"
// Csak a megfelelő karaktereket fogadjuk el, minden mást vessünk el (nagybetű belefér) és jelezzük a hibát
// EOF használata linuxban: Ctrl+D; windowsban: Ctrl+Z (Enter)
// Jobb eszköz híján válasszunk egy "kellően" nagy tömböt a várható számok tárolásához

#include <stdio.h>
#include <stdbool.h>
#include <math.h> // pow(alap, kitevo) miatt -> fordítás: gcc fel01_hexa.c -lm

#define MAX_STRING 256


bool is_char_allowed(char ch)
{
    if (ch >= 'a' && ch <= 'f' || ch >= 'A' && ch <= 'F' || ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int ConvertHexCharToDigit(char hexch)
{
    if (hexch >= '0' && hexch <= '9')
    {
        return hexch - '0';
    }
    else
    {
        switch (hexch)
        {
            case 'a': return 10;
            case 'b': return 11;
            case 'c': return 12;
            case 'd': return 13;
            case 'e': return 14;
            case 'f': return 15;
        }
    }
}


int ConvertHexToDec(char hex[], int size)
{
    int res = 0;
    for (int i = 0; i < size; ++i)
    {
        int exponent = size - i - 1;
        printf("Current char: %c\n", hex[i]);
        printf("Current exponent: %d\n", exponent);
        printf("Current integer value: %d\n", ConvertHexCharToDigit(hex[i]));
        res += ConvertHexCharToDigit(hex[i]) * pow(16, exponent);
    }
    return res;
}

// 210
// 45a -> 4 * pow(16, 2) + 5 * pow(16, 1) + 10 * pow(16, 0)
int main()
{
    char ch;
    char str[MAX_STRING];
    int idx = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            break;
        }
        if (!is_char_allowed(ch))
        {
            printf("Error: invalid char\n");
        }
        
        str[idx] = ch;
        ++idx;
        
        if (idx == MAX_STRING - 1)
        {
            break;
        }

    }
    
    str[idx] = '\0';
    
    printf("The entered string: %s\n", str);
    
    int res = ConvertHexToDec(str, idx);
    printf("base10 value: %d\n", res);
    
}




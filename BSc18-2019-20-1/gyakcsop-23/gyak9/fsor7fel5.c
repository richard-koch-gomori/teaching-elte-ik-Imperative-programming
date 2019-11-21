

#include <stdio.h>


/*
// a
// probl�ma: ez a megold�s nem ellen�rzi, hogy a *dest valid
// mem�riater�letre hivatkozik-e (azaz a dest elegend�� m�ret�-e)
void strcopy(char* dest, char* src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// b
// ez m�r jobb: a size-ben megadjuk a maxim�lis m�retet,
// amely rendelkez�s�nkre �ll
void strcopy(char* dest, char* src, int size)
{
    // size lok�lis m�solat, minden iter�ci�ban cs�kkentj�k 1-gyel
    // az 1 onnan j�n, hogy a ciklus ut�n m�g be�runk egy '\0'-t,
    // amit szint�n t�rolni kell vhol
    while (*src != '\0' && size-- > 1)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
*/

void strcopy(char* dest, char* src, int size)
{
    // t�m�rebb de nehezebben olvashat� megold�s
    // C-ben el�g elterjedt, szok�sos t�m�r�t�si m�d
    if (size > 0)
        while ((*dest++ = size-- > 1 ? *src++ : '\0'));
}

int main()
{
    char arr[128];
    //strcopy(&arr[0]
    strcopy(arr, "test", 128);
    printf("%s\n", arr);
}


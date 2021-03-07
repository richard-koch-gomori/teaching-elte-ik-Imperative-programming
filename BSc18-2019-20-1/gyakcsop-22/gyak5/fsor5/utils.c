#include <string.h> // strlen() miatt

#include "func_header.h"


void reverse(char str[])
{
    for (int i = 0, j = strlen(str) - 1; i < j; ++i, --j)
    {
        // k�t v�ltoz� �rt�k�nek felcser�l�se egy harmadik, seg�dv�ltoz� bevezet�s�vel
        // az a = b; b = a; �rt�kad�s helytelen, mert a �rt�ke elv�sz az els� �rt�kad�sban
        // ez�rt el�sz�r a �rt�k�t kimentj�k egy k�l�n helyre
        // c = a; a = b; b = c; m�r helyes
        // itt is ez t�rt�nik, csak char t�pus� adatokkal
        char c;
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}


void squeeze(char str[], char ch)
{
    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        // a ch karaktereket nem m�soljuk
        // a j v�ltoz� tartja sz�mon az "eredm�ny" utols� karakter�nek index�t
        // az i-vel pedig az str[]-en megy�nk v�gig
        // a ciklus az str[] j-edik elem�be m�solja str[] i-edik elem�t
        // az alap�tlet az, hogy ha ch-t tal�lunk, akkor j-t nem, de i-t mindig n�velj�k
        if (str[i] != ch)
        {
            str[j++] = str[i];
            // ez a ciklusmag ugyanaz mint:
            //str[j] = str[i];
            //j++;
            // a j++ posfix n�vel�s a n�vel�s el�tti �rt�kkel t�r vissza (azaz j-vel),
            // ez�rt bevihet� a t�mbindexel�sbe
            // t�m�rebb, r�videbb megold�s
        }
        i++;
    }
    // a sztring v�g�t a '\0'-al kell z�rni
    str[j] = '\0';
}


// strcount: visszaad param�terben count db ch karaktert
void strcount(char dest[], int maxsize, int count, char ch)
{
    int i = 0;
    for (; i < count && i < maxsize - 1; ++i)
    {
        dest[i] = ch;
    }
    dest[i] = '\0';
}

int strany(const char str[], const char tmp[])
{
    for (int i = 0; str[i] != '\0'; ++i)
    {
        for (int j = 0; tmp[j] != '\0'; ++j)
        {
             if (str[i] == tmp[j])
             {
                 return i;
             }
        }
    }
    // ha a vez�rl�s ide ker�l, akkor az az�rt t�rt�nhetett, mert a cikluson bel�l
    // egyszer sem volt igaz str[i] == tmp[j]
    return -1;
}


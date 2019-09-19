

#include <stdio.h>


int main()
{
    char str[256];
    // miért éppen 256? ez a program csak olyan inputot képes kezelni, amelynek a
    // max mérete 256 - 1 azaz 255; másik tantárgy feladata lesz ezt kiküszöbölni
    printf("Írjon be egy szöveget: ");
    gets(str);
    int count_a, count_e, count_i, count_o, count_u;
    count_a = 0; // ha nem inicializálnánk, memóriaszemét lenne a változóban
    count_e = 0;
    count_i = 0;
    count_o = 0;
    count_u = 0;

    // while ciklussal:
    /*
    int idx = 0;
    while (str[idx] != '\0')
    {
        ...
        idx++;
    }
    */

    // a ciklus addig lépeget elõre a sztringben, amíg az aktuális karakter
    // nem a '\0' (sztringvége jel)
    for (int idx = 0; str[idx] != '\0'; idx++)
    {
        //printf("ch = %c\n", str[idx]);
        switch(str[idx])
        {
            case 'a':
            {
                count_a++;
                break;
                // a switch általános (tipikus) használata esetén a case blokkok
                // végén kell írni egy break; utasítást
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
    printf("a: %i\ne: %i\ni: %i\no: %i\nu: %i\n", count_a, count_e, count_i, count_o, count_u);

    return 0;
}


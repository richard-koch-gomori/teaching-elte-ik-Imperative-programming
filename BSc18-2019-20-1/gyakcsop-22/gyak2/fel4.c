

#include <stdio.h>


int main()
{
    char str[64];
    gets(str);
    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;
    // a ciklus addig l�peget el�re a sztringben, am�g az aktu�lis karakter
    // nem a '\0' (sztringv�ge jel)
    for (int idx = 0; str[idx] != '\0'; idx++)
    {
        switch (str[idx])
        {
            case 'a':
            {
                count_a++;
                break;
                // a switch �ltal�nos (tipikus) haszn�lata eset�n a case blokkok
                // v�g�n kell �rni egy break; utas�t�st
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


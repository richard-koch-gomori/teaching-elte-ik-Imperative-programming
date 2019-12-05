

#include <stdio.h>


// a foo() fv az str[] sztringet nem sz�nd�kozik m�dos�tani,
// ilyenkor const char str[] (vagy const char* str ) -k�nt
// illik deklar�lni, ho a fv ne tudja m�dos�tani
void foo(char dest[], const char str[], char ch)
{
    int i = 0;
    for (; str[i] != '\0'; ++i)
    {
        if (str[i] == ch)
        {
            dest[i] = ' ';
        }
        else
        {
            dest[i] = str[i];
        }
    }
    dest[i] = '\0';
}


int main()
{
    char dest[256];
    foo(dest, "hello world F almAu", 'A');
    printf("%s\n", dest);
}


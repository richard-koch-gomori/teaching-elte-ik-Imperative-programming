// ford�t�s:  gcc std_declarations.c -o std_declarations.out -std=c99


#include <stdio.h>


int main()
{
    // C90-ben minden deklar�ci�nak egy csoportban, a f�ggv�ny
    // elej�n kell szerepelnie, az utas�t�sokat megel�zve
    // ez a k�d nem fordul C90-nel, mert a printf() utas�t�s
    // ut�n deklar�ci� szerepel, C99-cel viszont fordul
    int i = 0;
    printf("foo");
    int j;
    return 0;
}


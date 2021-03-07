
#include <stdio.h>


// glob�lis static v�ltoz�: erre a ford�t�si egys�gre n�vre glob�lis, viszont a gener�lt
// f�jlb�l nem l�tszik ki az i v�ltoz�
// static int i = 0;


void counter()
{
    // lok�lis static v�ltoz�: a fv h�v�sok k�zben is meg�rzi �rt�k�t, egyszer inicializ�l�dik
    // a legels� fv h�v�skor
    static int i = 0;
    i++;
    printf("counter(): %i\n", i);
    // ...
}


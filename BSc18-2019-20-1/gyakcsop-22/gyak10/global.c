

#include <stdio.h>


int func()
{
    printf("hello");
    return 12;
}


// a glob�lis v�ltoz�k haszn�lat�t er�sen meg kell indokolni,
// mert t�bb szempontb�l is probl�m�s a haszn�latuk

int i = func();


int main()
{
    printf("world");
}

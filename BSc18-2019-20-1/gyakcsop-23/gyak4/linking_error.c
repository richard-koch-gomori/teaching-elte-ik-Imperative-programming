

#include <stdio.h>


/*
ez a f�jl szintaktikaileg helyes, ez�rt fordul (compiles), viszont
calling_not_existing_function() n�ven nincs f�ggv�ny, ez�rt
a szerkeszt� (linker) nem tud futtathat� bin�rist el��ll�tani

ez teh�t egy linkel�si hiba, ami a hiba�zenetb�l is j�l l�tszik:

(.text+0x2d): undefined reference to `calling_not_existing_function'
collect2: error: ld returned 1 exit status

az "ld" (linker) exitk�dja volt nemnulla
*/


int main()
{
    printf("hello world");
    // nem l�tez� f�ggv�ny h�v�sa
    calling_not_existing_function();
    return 0;
}


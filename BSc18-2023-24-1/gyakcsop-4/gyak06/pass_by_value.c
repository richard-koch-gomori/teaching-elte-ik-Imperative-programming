#include <stdio.h>

/*
érték szerinti paraméterátadás:
amikor történik egy foo(var) függvényhívás, akkor a paraméterbe
lemásolódik var értéke

így minden C függvény a paramátereinek saját, lokális másolataival dolgozik
*/

void foo(int param)
{
    param = 2;
    printf("param = %d\n", param);
}

int main()
{
    int x = 1;
    foo(x);
    printf("x = %d\n", x);
}


/*
memóriatérkép (memory map)

stack:

x       00000000 00000000 00000000 00000001

foo(x) függvényhíváskor a paraméterek értékei lemásolódnak:
param   00000000 00000000 00000000 00000001

param = 2 a másolatot módosítja, x-et nem
param   00000000 00000000 00000000 00000010

heap:
üres
*/

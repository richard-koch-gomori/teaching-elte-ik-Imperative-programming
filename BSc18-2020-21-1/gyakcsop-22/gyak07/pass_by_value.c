/*
Feladat: Egészítse ki a következő kódot a kommentben megadott feladatokkal.
Mit tapasztal? Mi a jelenség oka?
*/


#include <stdio.h>


/*
A C nyelv érték szerinti (pass by value) paraméterátadást használ:
amikor történik egy foo(var) függvényhívás, akkor az x paraméterbe
lemásolódik var értéke

így minden C függvény a paramátereinek sajűt, lokális másolataival dolgozik

ezért van az, hogy a main()-ben lévő var, és a foo(var) függvényhívás esetében
különböző memóriacímek íródnak ki: a foo() függvénybeli kiíratáskor
a függvény saját, lokális másolatának memóriacímét íratjuk ki
*/


void foo(int x)
{
    printf("x memory addres: %lu, x = %i\n", (unsigned long int)(&x), x);
    x = 20;
}


int main()
{
    foo(7);

    int var = 10;

    printf("var memory addres: %lu, var = %i\n", (unsigned long int)(&var), var);

    foo(var);

    printf("var memory addres: %lu, var = %i\n", (unsigned long int)(&var), var);
    return 0;
}



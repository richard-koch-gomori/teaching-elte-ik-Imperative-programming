#include <stdio.h>
#include <limits.h>


int main()
{
    /*
    int, double stb típusok mérete a C programozási nyelvben nem definiált
    pontos méretük a használt fordítóprogramtól valamint a számítógéptől is függ
    egy adott rendszeren azonban lekérdezhető a méretük: sizeof(típus)
    sizeof(x) visszaaadja hogy az x (ami lehet változó vagy típus) hány bájton van tárolva

    a C programozási nyelv viszont rögzíti, hogy a sizeof(int) <= sizeof(long int) <= sizeof(long long int)

    az alábbi kód int típussal túlcsordult, long long int típussal viszont helyes eredmény írt ki a gyakorlaton:
    */

    long long int x = 2000000000;
    long long int y = 2*x;
    printf("%lli\n", y);

    printf("max int = %i\n", INT_MAX);

    // a limits.h-ban definiált szimbúlumokból lehet megtudni hogy az adott rendszeren
    // mi a pontos mérete vagy határa egy adott tulajdonságnak
    // pl INT_MAX az adott rendszeren az int típusban tárolható legnagyobb érték
}



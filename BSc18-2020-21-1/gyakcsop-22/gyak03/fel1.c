/*
Feladat: Jelenítse meg számok sorozatát az ábrán látható módon n-ig.

1
22
333
4444
55555
...
*/

// Vargha Csongor Csaba megoldása


#include <stdio.h>


int main()
{
    int n;
    printf("Adj meg egy szamot\n");
    scanf("%i",&n);
    for (int i = 1; i < n+1; ++i)
    {
        for (int j = 0; j < i-1; ++j)
        {
            printf("%i",i); // itt ki írjuk az i darab i-t
        }
        printf("%i\n",i); // itt törünk sort
    }

    return 0;
}


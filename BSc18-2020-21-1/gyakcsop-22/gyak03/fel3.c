/*
Feladat: Keresse meg a legnagyobb olyan 2003-nál kisebb egész számot, amely 123-mal osztható.
*/

// Horváth András József megoldása


#include <stdio.h>


int main()
{
    for (int i = 2003; i >= 0; --i)
    {
        if (i % 123 == 0)
        {
            printf("%i\n", i);
            break;
        }
    }

    return 0;
}



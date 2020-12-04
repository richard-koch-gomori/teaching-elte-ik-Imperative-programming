/*
Feladat:
Írj egy makrót, amely egy szám négyzetét számolja ki.
*/


#include <stdio.h>

#define M_SQR(a) (a)*(a)


int main()
{
    printf("sqr = %i\n", M_SQR(3+1));
    return 0;
}



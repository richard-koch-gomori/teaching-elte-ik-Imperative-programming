// Ha használjuk a math.h-t, akkor egyes gcc fordítóknál szükség lehet a -lm kapcsolóra:
// fordítás: gcc fsor02_math.c -lm

#include <stdio.h>
#include <math.h>


int main()
{
    printf("The square root of 2: %lf\n", pow(16, 3));
}



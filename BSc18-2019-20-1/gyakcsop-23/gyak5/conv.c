

#include <stdio.h>


int main()
{
    int i = 2;
    float f = 3.14;

    // információvesztés, de a konverzió automatikusan megtörténik
    // (implicit konverzió)
    i = f;

    printf("%i\n", i);
}


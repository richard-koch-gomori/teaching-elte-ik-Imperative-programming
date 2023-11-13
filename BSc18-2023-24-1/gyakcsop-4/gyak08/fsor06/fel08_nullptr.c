// Dereferáljunk egy null mutatót. Mi az eredmény?

#include <stdio.h>


int main()
{
    int* ptr = NULL;
    *ptr = 10;
}


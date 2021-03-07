

#include <stdio.h>


int main()
{
    // a
    short int i = 3906;
    short int* psi = &i;
    unsigned char* pc = (unsigned char*)psi;
    printf("%i\n", *pc); // implementáció függõ (little vs big endian)
}




#include <stdio.h>


int main()
{
    int i;
    int* pi = &i;
    unsigned long int u = 45;
    // point konstans pointer:
    // a pointer nem szerepelhet az �rt�kad�s bal oldal�n
    unsigned long int* const point = &u;
}


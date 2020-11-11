// int i = 3906
// 0000 0000 0000 0000 0000 1111 0100 0010 big endian
// 0100 0010 0000 1111 0000 0000 0000 0000 little endian


#include <stdio.h>


int main()
{
    int i = 3906;
    int* pi = &i;
    char* pc = (char*)pi; // type cast
    printf("%i\n", *pc);
    pc++;
    printf("%i\n", *pc);
}



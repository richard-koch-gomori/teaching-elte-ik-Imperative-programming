

#include <stdio.h>
#include <limits.h>

int main()
{
    int i = 1; // kettes számrsz: 0001 (2) = 1 * 2^0 = 1
    int j = 2; // kettes számrsz: 0010 (2) = 1 * 2^1 = 2

    printf("%d\n", sizeof(long long int));

    int max = INT_MAX;
    printf("%d\n", max);
    printf("%d", max + 1);
}


/*
memory map

a.out
i 00000000 00000000 00000000 00000001
j 00000000 00000000 00000000 00000010

legnagyobb tárolható érték
pl. unsigned int esetében
11111111 11111111 11111111 11111111
*/
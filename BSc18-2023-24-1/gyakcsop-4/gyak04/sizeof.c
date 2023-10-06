#include <stdio.h>
#include <limits.h>

int main()
{
    int i = 1; // kettes számrsz: 0001 (2) = 1 * 2^0 = 1
    int j = 2; // kettes számrsz: 0010 (2) = 1 * 2^1 + 0 * 2^0 = 2

    printf("%d\n", sizeof(long long int));

    int x = INT_MAX;
    printf("%d", x+1);
}

/*
memory map

i 00000000 00000000 00000000 00000001
j 00000000 00000000 00000000 00000010

max érték unsigned int
11111111 11111111 11111111 11111111
*/


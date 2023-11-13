// Írj egy függvényt, ami két azonos tömbön belülre mutató mutatóról eldönti, hogy melyik mutat kisebb indexű elemre.

#include <stdio.h>



int* smaller_idx(int* ptr, int size, int* p1, int* p2)
{
    if (p1 <= p2) return p1;
    else return p2;
}

int main()
{
    int array[] = {1, 2, 8, 10, 7};
    printf("memory address of 2 in array: %llu\n", (long long unsigned int)(array + 1));
    printf("result: %llu\n", (long long unsigned int)smaller_idx(array, 5, array + 1, array + 4));
}


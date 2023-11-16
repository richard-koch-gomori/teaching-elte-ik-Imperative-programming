#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    srand(time(NULL));
    printf("%d\n", rand() % N);
}



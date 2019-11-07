

#include <stdio.h>


void swap(int* px, int* py)
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}


int main()
{
    int x = 5;
    int y = 7;

    printf("x = %i, y = %i\n", x, y); // 5, 7

    swap(&x, &y);

    printf("x = %i, y = %i\n", x, y); // 7, 5
}


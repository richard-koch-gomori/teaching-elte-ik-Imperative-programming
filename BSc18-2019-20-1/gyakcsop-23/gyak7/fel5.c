

#include <stdio.h>


void swap_pointers(int** ppx, int** ppy)
{
    int* tmp = *ppx;
    *ppx = *ppy;
    *ppy = tmp;
}


int main()
{
    int x = 5;
    int y = 7;

    int* px = &x;
    int* py = &y;

    printf("*px = %i, *py = %i\n", *px, *py); // 5, 7

    swap_pointers(&px, &py);

    printf("*px = %i, *py = %i\n", *px, *py); // 5, 7
}


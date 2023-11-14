#include <stdio.h>

void print_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d,", array[i]);
    }
    printf("\n");
}

#define SIZE 5

int main()
{

    int x[] = {10, 20, 30, 40, 50}; // cél: {1000, 10, 20, 30, 40};
    print_array(x, SIZE);

    for (int i = SIZE - 1; i > 0; i--) // i = 4, 3, 2, 1
    {
        x[i] = x[i - 1];
    }

    x[0] = 1000;
    print_array(x, 5);
}



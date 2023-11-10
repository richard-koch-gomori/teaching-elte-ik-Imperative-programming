#include <stdio.h>

int main()
{


    int array[100]; // max mérete a tömbnek ami 100, de az aktuális mérete size
    int size = 0;

    array[size] = 10;
    size++;
    // array = {10} size = 1
    printf("size = %d\n", size);


    array[size] = 20;
    size++;
    // array = {10, 20} size = 2
    printf("size = %d\n", size);
}



#include <stdio.h>


int main()
{
    /*
    char str[5] = "test";
    char* ptr = &str[0];

    printf("%c\n", *ptr);

    ptr = ptr + 1;
    printf("%c\n", *ptr);

    ptr = ptr + 2;
    printf("%c\n", *ptr);*/

    int arr[] = {-1, -2, -3};
    int* ptr = &arr[0];
    printf("%i\n", *ptr);
    ptr = ptr + 1;
    printf("%i\n", *ptr);
}




#include <stdio.h>


int main()
{
    /*
    int x[5] = {-1, -2, -3, -4, -5};

    for (int i = 0; i < 5; ++i)
    {
        printf("item %i\n", array[i]);
    }
    */

    char str[32] = "hello";
    for (int i = 0; str[i] != '\0'; ++i)
    {
        printf("%c", str[i]);
    }
}

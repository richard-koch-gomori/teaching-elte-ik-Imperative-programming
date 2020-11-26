#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// #include: a fájl tartalma ide másolódik fordítás közben
#include "reverse.h"

#define MAX_STRING 256


int main()
{
    char str[MAX_STRING];
    printf("Enter a string: ");
    fgets(str, MAX_STRING, stdin);
    char* str2 = malloc(sizeof(char) * strlen(str) + 1);
    if (str2 == NULL)
    {
        printf("Unable to malloc()\n");
        return 1;
    }
    reverse(str, str2);
    printf("reveresed string: %s\n", str2);

    return 0;
}

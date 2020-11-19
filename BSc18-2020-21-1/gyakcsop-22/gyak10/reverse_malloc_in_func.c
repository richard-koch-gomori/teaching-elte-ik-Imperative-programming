

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING 256


char* reverse(char* str)
{
    int len = strlen(str);
    char* result = malloc(sizeof(char) * len + 1);
    int i;
    for (i = 0; i < len; ++i)
    {
        result[len - i - 1] = str[i];
    }
    result[i] = '\0';
    return result;
}


int main()
{
    char str[MAX_STRING];
    printf("Enter a string: ");
    fgets(str, MAX_STRING, stdin);
    char* ptr;
    ptr = reverse(str);
    printf("reveresed string: %s\n", ptr);
    free(ptr);
    // a reverse() függvény foglalta le a memóriaterületet
    // a hívó függvénynek (main()) kell felszabadítania azt
    // probléma: a reverse() függvény használójának emlékeznie kell arra,
    // h fel kell szabadítani a területet

    return 0;
}



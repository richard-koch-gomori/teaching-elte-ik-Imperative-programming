

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING 256


/*
void reverse(char* str)
{
    for (int i = 0, j = strlen(str) - 1; i < j; ++i, --j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
*/

// a reverse() függvény nem foglal le memóriaterületet, hanem
// megkapja azt a pointer-t, amely arra a területre mutat,
// ahol dolgozhat
void reverse(char* str, char* result)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len; ++i)
    {
        result[len - i - 1] = str[i];
    }
    result[i] = '\0';
}


int main()
{
    char str[MAX_STRING];
    printf("Enter a string: ");
    fgets(str, MAX_STRING, stdin);
    char* str2 = malloc(sizeof(char) * strlen(str) + 1); // strlen("alma") == 4
    reverse(str, str2);
    printf("reveresed string: %s\n", str2);

    str2 = malloc(1); // memory leak
    //free(str2);

    return 0;
}

/*
str = a l m a
reverse(str)
str = a m l a
*/

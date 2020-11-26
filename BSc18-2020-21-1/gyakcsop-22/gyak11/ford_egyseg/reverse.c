#include <string.h>


void reverse(char* str, char* result, double d)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len; ++i)
    {
        result[len - i - 1] = str[i];
    }
    result[i] = '\0';
}


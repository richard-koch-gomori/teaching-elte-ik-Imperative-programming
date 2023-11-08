#include <stdio.h>

// if str1 < str2 then returns negative
// if str1 == str2 then returns zero
// if str1 > str2 then returns positive
int my_strcmp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            break;
        }
        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    printf("%d\n", 'A');
    printf("%d\n", 'B');
    printf("%d\n", 'A' - 'B');  // neg ekvivalens 'A' < 'B'

    //printf("%d\n", my_strcmp("AB", "A"));
    int res = my_strcmp("AA", "B");
    if (res < 0)
    {
        printf("str1 < str2\n");
    }
    else if (res == 0)
    {
        printf("str1 == str2");
    }
    else
    {
        printf("str1 > str2");
    }
}


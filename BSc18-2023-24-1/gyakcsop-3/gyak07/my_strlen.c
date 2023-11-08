/*
#include <stdio.h>
//#include <string.h>

int my_strlen(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        len++;
    }
    return len;
}

int main()
{
    //char array[] = {'A', 'B', '\0'};
    char array[] = "hello world";
    int len = my_strlen(array);
    printf("%s\n", array);
    printf("%d\n", len);
}
*/

#include <stdio.h>
//#include <string.h>

int my_strlen(char str[])
{
    int i = 0;
    for (; str[i] != '\0'; ++i)
    {
    }
    return i;
}

int main()
{
    //char array[] = {'A', 'B', '\0'};
    char array[] = "hello world";
    printf("%s\n", array);
    printf("%d\n", my_strlen(array));
}


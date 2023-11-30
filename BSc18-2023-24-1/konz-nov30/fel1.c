// 11sor/5

#include <stdio.h>

#define ARRAY_SIZE 256

// kisetű -> nagybetű
void conv(char str[], char dest[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            //printf("str[i]: %c\n", str[i]);
            dest[i] = str[i];
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            //("str[i]: %c\n", str[i] - ('a' - 'A'));
            dest[i] = str[i] - ('a' - 'A');
        }
        else
        {
            //printf("str[i]: %c\n", str[i]);
            dest[i] = str[i];
        }
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char array[ARRAY_SIZE] = "van vmi memoriaszemet";
    conv("Hello world", array);
    printf("array = %s\n", array);

    //printf("%c\n", 'C' + ('a' - 'A'));
}


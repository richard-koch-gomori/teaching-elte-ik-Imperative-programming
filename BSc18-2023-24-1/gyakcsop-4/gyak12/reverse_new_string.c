#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverse_in_place(char* input)
{
    int len = strlen(input);
    for (int i = 0; input[i] != '\0' && i < len / 2; i++)
    {
        int j = len - i - 1;
        char tmp = input[i];
        input[i] = input[j];
        input[j] = tmp;
    }
}

// len=5
//j =01234
//  "hello"
char* reverse(char* input)
{
    int len = strlen(input);
    char* dest = malloc(sizeof(char) * (len + 1)); // dest="olleh0aszemet"
    for (int i = 0; input[i] != '\0'; i++)
    {
        int j = len - i - 1;
        dest[j] = input[i];
    }
    dest[len] = '\0';
    return dest;
}

int main()
{
    char s[] = "hello";
    char* result = reverse(s);
    printf("reverse string: %s\n", result);
    free(result);
}


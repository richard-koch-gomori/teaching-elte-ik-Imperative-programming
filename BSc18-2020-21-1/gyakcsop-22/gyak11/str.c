

#include <stdio.h>

int main()
{
    char str1[] = "first string";
    char* str2 = "second string";

    str1[0] = 'A';
    printf("%s\n", str1);
    str2[0] = 'A';
    printf("%s\n", str2);
}


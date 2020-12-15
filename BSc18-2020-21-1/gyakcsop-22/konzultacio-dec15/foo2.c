

#include <stdio.h>

int main()
{
    char str[2][4];
    str[0][0] = 'a';
    str[0][1] = 'b'; // 0 sorindex, 1 oszlopindex
    str[0][2] = 'f';
    str[0][3] = '\0';

    str[1][0] = 'W';
    str[1][1] = 'X';
    str[1][2] = '\0';
    
    printf("str[0] = %s\n", str[0]);
    printf("str[1] = %s\n", str[1]);

/*
    char res[256];
    gets(res);
    printf("%s", res);
*/
}



#include <stdio.h>

int main()
{


    char ch = 't';
/*
    if (ch >= 'A' && ch <= 'Z')
        printf("%c", ch + ('a' - 'A'));
    else
        printf("%c", ch - ('a' - 'A'));
*/

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n') continue;
        if (ch >= 'A' && ch <= 'Z')
            printf("%c", ch + ('a' - 'A'));
        else
            printf("%c", ch - ('a' - 'A'));
        //putchar(ch);
    }


}
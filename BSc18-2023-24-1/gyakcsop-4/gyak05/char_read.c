#include <stdio.h>

int main()
{

    char ch;
    //scanf(" %c", &ch);

    //printf("ch = %c\n", ch);

    while ((ch = getchar()) != EOF)
    {
        ch = getchar();
        if (ch == '\n')
        {
            printf("ENTER pressed\n");
        }
        putchar(ch);
    }


}
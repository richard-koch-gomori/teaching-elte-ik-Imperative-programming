#include <stdio.h>

int main()
{

    char ch;
    //scanf(" %c", &ch);

    //printf("ch = %c\n", ch);

    while (1)
    {
        ch = getchar();
        /*if (ch == '\n')
        {
            printf("ENTER pressed\n");
            break;
        }*/
        if (ch == '0')
        {
            printf("0 pressed\n");
            break;
        }
        if (ch == EOF)
        {
            printf("EOF\n");
            break;
        }
        putchar(ch);
    }


}
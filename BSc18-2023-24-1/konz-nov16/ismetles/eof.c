#include <stdio.h>


int main()
{
    char ch;
    while ( (ch = getchar()) != EOF )
    {
        if (ch == '\n')
        {
            printf("Exiting for loop...\n");
            break;
        }
        printf("ch = %c\n", ch);
    }
    
}



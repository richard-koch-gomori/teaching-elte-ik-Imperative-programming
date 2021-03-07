

#include <stdio.h>

#include "func.h"



int main(int argc, char* argv[])
{
    /*
    reset();

    digit(2);
    plus();
    digit(4);
    times();
    digit(3);

    printf("result = %i\n", plus());
    */

    for (int i = 1; i < argc; ++i)
    {
        reset();
        //printf("%s\n", argv[i]);
        for (int j = 0; argv[i][j] != '\0'; ++j)
        {
            if (argv[i][j] == '+')
            {
                plus();
            }
            else if (argv[i][j] == '*')
            {
                times();
            }
            else
            {
                //printf("%i\n", argv[i][j]);
                digit(argv[i][j] - '0');
            }
        }
        printf("result = %u\n", plus());
    }
    return 0;
}



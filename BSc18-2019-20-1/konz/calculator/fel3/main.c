

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
        calculator c;
        reset(&c);
        //printf("%s\n", argv[i]);
        for (int j = 0; argv[i][j] != '\0'; ++j)
        {
            if (argv[i][j] == '+')
            {
                plus(&c);
            }
            else if (argv[i][j] == '*')
            {
                times(&c);
            }
            else
            {
                //printf("%i\n", argv[i][j]);
                digit(&c, argv[i][j] - '0');
            }
        }
        printf("result = %u\n", plus(&c));
    }

    return 0;
}



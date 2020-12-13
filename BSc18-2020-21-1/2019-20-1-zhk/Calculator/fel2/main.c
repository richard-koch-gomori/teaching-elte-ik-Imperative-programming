// fel2


#include <stdio.h>
#include <string.h>

#include "func.h"


int main(int argc, char* argv[])
{
/*
    reset();

    digit(5);
    digit(1);
    plus();
    digit(5);
    times();
    digit(2);

    printf("memory = %i\n", plus());
*/

    if (argc > 1)
    {
        for (int idx = 1; idx < argc; ++idx) // 1 pont
        {
            reset();
            const int len = strlen(argv[idx]);
            for (int j = 0; j < len; ++j) // 1 pont
            {
                const char ch = argv[idx][j];
                if (ch >= '0' && ch <= '9') // 1 pont
                {
                    digit(ch - '0');
                }
                else if (ch == '+') // 1 pont
                {
                    plus();
                }
                else if (ch == '*') // 1 pont
                {
                    times();
                }
                else
                {
                }
            }
            printf("result = %i\n", plus());
        }
    }

    return 0;
}




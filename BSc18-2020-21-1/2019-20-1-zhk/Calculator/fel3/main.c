// fel3


#include <stdio.h>
#include <string.h>

#include "func.h"


int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        for (int idx = 1; idx < argc; ++idx)
        {
            calculator calc; // 1 pont: lokális változó
            reset(&calc); // 1 pont: mutatógenerálás
            const int len = strlen(argv[idx]);
            for (int j = 0; j < len; ++j)
            {
                const char ch = argv[idx][j];
                if (ch >= '0' && ch <= '9')
                {
                    digit(&calc, ch - '0');
                }
                else if (ch == '+')
                {
                    plus(&calc);
                }
                else if (ch == '*')
                {
                    times(&calc);
                }
                else
                {
                }
            }
            printf("result = %i\n", plus(&calc));
        }
    }

    return 0;
}




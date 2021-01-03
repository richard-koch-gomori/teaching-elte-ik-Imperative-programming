// 4. feladat (össz: 1 pont)

#include <stdio.h>

#include "func.h"


int main(int argc, char* argv[])
{
    if (argc <= 1)
    {
        reverse(stdin); // 1 pont: standard input (stdin)
        return 1;
    }

    for (int i = 1; i < argc; ++i)
    {
        FILE* input = fopen(argv[i], "r");
        if (input == NULL)
        {
            printf("Error: Unable to open file %s\n", argv[i]);
            return 1;
        }

        int res = reverse(input);
        if (res != 0)
        {
            continue;
        }
        fclose(input);
    }

    return 0;
}


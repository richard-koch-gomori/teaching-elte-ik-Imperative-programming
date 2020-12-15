// Nem 100%-os megoldás, idő hiányában félretettük

#include <stdio.h>
#include <stdlib.h>

#include "func.h"

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; ++i)
    {
        FILE* input = fopen(argv[i], "r");
        if (input == NULL)
        {
            return 1;
        }
        hd(input);
        fclose(input);
    }

    return 0;
}


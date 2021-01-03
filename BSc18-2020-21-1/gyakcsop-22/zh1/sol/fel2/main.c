// 2. feladat (össz: 3 pont)

#include <stdio.h>

#include "func.h"


int main(int argc, char* argv[])
{
    if (argc <= 1)
    {
        printf("Error: No command line arguments\n");
        return 1;
    }

    FILE* input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Error: Unable to open file %s\n", argv[1]);
        return 1;
    }

    int res = reverse(input);
    if (res != 0)
    {
        return res;
    }
    fclose(input);

    return 0;
}


// 3. feladat (össz: 2 pont)

#include <stdio.h>

#include "func.h"


int main(int argc, char* argv[])
{
    if (argc <= 1)
    {
        printf("Error: No command line arguments\n");
        return 1;
    }

    // 1 pont: több fájlra is működik
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
            continue; // 1 pont: hiba esetén következő fájl
        }
        // ha valakinek a reverse() void típusú, akkor itt csak meg kell hívni reverse(input); -t, continue felesleges
        fclose(input);
    }

    return 0;
}


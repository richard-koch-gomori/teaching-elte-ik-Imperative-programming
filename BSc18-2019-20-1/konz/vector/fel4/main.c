

#include <stdio.h>
#include <stdlib.h>

#include "func.h"



int main(int argc, char* argv[])
{
/*
    vector v;
    if (initialize(&v, 10) != 0)
    {
        printf("jajj hiba volt\n");
        return 1;
    }
    append(&v, -3);
    append(&v, -5);
    append(&v, 10);
    printf("%i\n", retrieve(&v, 2));
    dispose(&v);
*/

    if (argc > 1)
    {
        vector v;
        initialize(&v, atoi(argv[1]));

        for (int i = 2; i < argc; i += 2)
        {
            // az i.-edik argumentum mindig parancs
            if (argv[i][0] == 'a')
            {
                printf("a %i\n", append(&v, atoi(argv[i + 1])));
            }
            else
            {
                printf("r %i\n", retrieve(&v, atoi(argv[i + 1])));
            }
        }
    }
    else
    {
        vector v;
        initialize(&v, 5);
        append(&v, -1);
        append(&v, 2);
        append(&v, -5);
        append(&v, -10);
        append(&v, 6);
        PrintVector(&v);
        printf("RESULT = %i\n", safe_append(&v, 100));
        //printf("RESULT = %i\n", set_capacity(&v, 4));
        PrintVector(&v);
    }
}

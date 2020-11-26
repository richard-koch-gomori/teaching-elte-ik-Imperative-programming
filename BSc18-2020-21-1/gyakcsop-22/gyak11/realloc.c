

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    size_t current_size = 2;
    int* data = malloc(current_size * sizeof(int));

    // ha a memóriafoglalás sikertelen volt (pl nincs elég memória)
    // akkor malloc, calloc, realloc NULL pointer-rel tér vissza
    if (data == NULL)
    {
        printf("Unable to malloc()\n");
        return 1;
    }

    size_t i = 0;
    bool exit = false;

    while (!exit)
    {
        if (current_size <= i)
        {
            current_size *= 2;
            data = realloc(data, current_size * sizeof(int));
            if (data == NULL)
            {
                printf("Unable to malloc()\n");
                return 1;
            }
            printf("realloc happened, data: %p, current_size: %zu\n", data, current_size);
        }
        printf("Enter an int: ");
        scanf("%i", &data[i]);
        if (data[i] == 0)
        {
            exit = true;
        }
        i++;
    }

    return 0;
}


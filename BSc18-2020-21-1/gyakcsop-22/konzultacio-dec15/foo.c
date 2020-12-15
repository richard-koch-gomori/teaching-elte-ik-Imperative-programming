

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// rögzített sor van

#define LINES 20

// rögzített egy sorban max. hány karaktrer lehet

#define MAX_CHAR 256

int main()
{
    FILE* input = fopen("input.txt", "r");
    //char arr[LINES][MAX_CHAR]; // stack

    char** arr = malloc(LINES * sizeof(char*)); // heap
    for (int j = 0; j < LINES; ++j)
    {
        char* ptr = malloc(sizeof(char) * (MAX_CHAR + 1));
        arr[j] = ptr;
    }

    int i = 0;
    while (fgets(arr[i], MAX_CHAR, input) != NULL)
    {
        int len = strlen(arr[i]);
        arr[i][len - 1] = '\0';
        //printf("len = %i\n", len);
        printf("arr = %s\n", arr[i]);

        //printf("arr = %s\n", *(arr + i));
        i++;
    }

    for (int j = 0; j < LINES; ++j)
    {
        free(arr[j]);
    }
    free(arr);

    fclose(input);
}


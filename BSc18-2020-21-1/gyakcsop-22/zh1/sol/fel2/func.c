
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "func.h"

// 1 pont: fv implementációk .c fájlban


char** read(FILE* fp, char** lines, int* lSize, int* result_lines_cap)
{
    int i = 0;
    int lines_cap = INITCAP;
    while (fgets(lines[i], BUFSIZE, fp) != NULL)
    {
        int len = strlen(lines[i]);
        lines[i][len - 1] = '\0';
        ++i;

        if (i >= lines_cap)
        {
            int prev_lines_cap = lines_cap;
            lines_cap *= 2;

            lines = realloc(lines, lines_cap * sizeof(char*));
            printf("DEBUG1: realloc happened lines=%p\n", lines);

            for (int j = prev_lines_cap; j < lines_cap; ++j)
            {
                lines[j] = malloc(sizeof(char) * (BUFSIZE + 1));
                if (lines[j] == NULL)
                {
                    printf("Unable to malloc() heap\n");
                    return NULL;
                }
                printf("DEBUG2: malloc happened lines[%i]=%p\n", j, lines[j]);
            }
        }
    }

    *lSize = i;
    *result_lines_cap = lines_cap;
    return lines;
}

void strreverse(char* str, char* result)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len; ++i)
    {
        result[len - i - 1] = str[i];
    }
    result[i] = '\0';
}

void write(char** lines, int current_size)
{
    for (int idx = current_size - 1; idx >= 0; idx--)
    {
        char reversed[BUFSIZE];
        strreverse(lines[idx], reversed);
        printf("%i %s\n", idx + 1, reversed);
    }
}

int reverse(FILE* fp)
{
    char** lines = malloc(INITCAP * sizeof(char*));
    if (lines == NULL)
    {
        printf("Unable to malloc() heap\n");
        return 1;
    }
    for (int j = 0; j < INITCAP; ++j)
    {
        lines[j] = malloc(sizeof(char) * (BUFSIZE + 1));
        if (lines[j] == NULL)
        {
            printf("Unable to malloc() heap\n");
            return 1;
        }
    }

    int current_size = 0;
    int result_lines_cap;
    lines = read(fp, lines, &current_size, &result_lines_cap);
    if (lines == NULL)
    {
        return 1;
    }
    write(lines, current_size);

    for (int j = 0; j < result_lines_cap; ++j)
    {
        free(lines[j]);
    }
    free(lines);
    return 0;
}


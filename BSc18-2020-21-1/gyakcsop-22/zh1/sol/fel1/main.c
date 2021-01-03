// 1. feladat (össz: 9 pont)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 pont
#define INITCAP 8
#define BUFSIZE 1024


// result_lines_cap: 2 lehetőség:
// - előre malloc() -> tudni kell a hívónak, hogy végül hány sornak lett heap memória foglalva (result_lines_cap, vagy globális változó)
// - menet közben malloc() -> ilyenkor result_lines_cap szükségtelen
// mindkét megoldást teljesértékűnek fogadom el
char** read(FILE* fp, char** lines, int* lSize, int* result_lines_cap)
{
    int i = 0;
    int lines_cap = INITCAP;
    while (fgets(lines[i], BUFSIZE, fp) != NULL) // 0.5 pont
    {
        int len = strlen(lines[i]);
        lines[i][len - 1] = '\0';
        ++i;

        if (i >= lines_cap)
        {
            int prev_lines_cap = lines_cap;
            lines_cap *= 2;

            lines = realloc(lines, lines_cap * sizeof(char*));
            //printf("DEBUG1: realloc happened lines=%p\n", lines);

            for (int j = prev_lines_cap; j < lines_cap; ++j)
            {
                lines[j] = malloc(sizeof(char) * (BUFSIZE + 1));
                if (lines[j] == NULL)
                {
                    printf("Unable to malloc() heap\n");
                    return NULL;
                }
                //printf("DEBUG2: malloc happened lines[%i]=%p\n", j, lines[j]);
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
    for (int idx = current_size - 1; idx >= 0; idx--) // 0.5 pont (sorok fordítva)
    {
        char reversed[BUFSIZE];
        strreverse(lines[idx], reversed); // 1 pont (sorok betűi fordítva)
        printf("%i %s\n", idx + 1, reversed);
    }
}

// reverse() visszatérési típusa lehet void is
// ha valaki nem juttatja vissza a main()-hez a reverse() exitkódját, az is teljesértékű megoldás
int reverse(FILE* fp)
{
    char** lines = malloc(INITCAP * sizeof(char*)); // 1 pont
    if (lines == NULL)
    {
        printf("Unable to malloc() heap\n");
        return 1;
    }
    for (int j = 0; j < INITCAP; ++j)
    {
        lines[j] = malloc(sizeof(char) * (BUFSIZE + 1)); // 0.5 pont (az is jó ha valaki menet közben malloc() -ol lépésenként)
        if (lines[j] == NULL)
        {
            printf("Unable to malloc() heap\n");
            return 1;
        }
    }

    // 1 pont: read() és write() hívás
    int current_size = 0;
    int result_lines_cap;
    lines = read(fp, lines, &current_size, &result_lines_cap);
    if (lines == NULL)
    {
        return 1;
    }
    write(lines, current_size);

    // 0.5 pont: takarít
    //printf("DEBUG: result_lines_cap = %i\n", result_lines_cap);
    for (int j = 0; j < result_lines_cap; ++j)
    {
        free(lines[j]);
    }
    free(lines);
    return 0;
}

int main(int argc, char* argv[])
{
    if (argc <= 1) // 1 pont
    {
        printf("Error: No command line arguments\n");
        return 1;
    }

    FILE* input = fopen(argv[1], "r"); // 1 pont
    if (input == NULL) // 0.5 pont
    {
        printf("Error: Unable to open file %s\n", argv[1]);
        return 1;
    }

    int res = reverse(input);
    if (res != 0)
    {
        return res;
    }
    fclose(input); // 0.5 pont

    return 0;
}


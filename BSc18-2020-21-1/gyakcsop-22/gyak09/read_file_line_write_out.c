

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    FILE* textfile = fopen("file.txt", "r"); // r - read // olvasni
    if (textfile == NULL)
    {
        printf("Error: Unable to load file.txt\n");
        return 1;
    }

    char line[256]; // sizeof(char)==1
    //fgets(line, sizeof(line), textfile);
    //printf("%s\n", line);

    FILE* output = fopen("output.txt", "w"); // w - write // írni
    if (output == NULL)
    {
        printf("Error: Unable to write output.txt\n");
        return 1;
    }

    while (fgets(line, sizeof(line), textfile) != NULL)
    {
        int sum = 0;
        for (char* ptr = strtok(line, " "); ptr != NULL; ptr = strtok(NULL, " "))
        {
            //printf("%s\n", ptr);
            int i = atoi(ptr);
            sum += i;
        }
        //char result[256];
        //sprintf(result, "sum = %i\n", sum);
        //fputs(result, output);
        fprintf(output, "sum = %i\n", sum);
    }
    fclose(textfile);
    fclose(output);

    return 0;
}



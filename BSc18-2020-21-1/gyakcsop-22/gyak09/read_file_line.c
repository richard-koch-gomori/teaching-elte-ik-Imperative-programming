

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
    while (fgets(line, sizeof(line), textfile) != NULL)
    {
        int sum = 0;
        for (char* ptr = strtok(line, " "); ptr != NULL; ptr = strtok(NULL, " "))
        {
            //printf("%s\n", ptr);
            int i = atoi(ptr);
            sum += i;
        }
        printf("sum = %i\n", sum);
    }
    fclose(textfile);

    return 0;
}



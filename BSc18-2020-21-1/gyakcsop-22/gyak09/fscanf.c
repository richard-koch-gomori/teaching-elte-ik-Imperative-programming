/*
Ha tudjuk hogy ilyen szerkezetű az input fájl:

3.14 10 hello
1.2 200 world
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    FILE* textfile = fopen("file1.txt", "r"); // r - read // olvasni
    if (textfile == NULL)
    {
        printf("Error: Unable to load file.txt\n");
        return 1;
    }

    char line[256]; // sizeof(char)==1

    double d;
    int i;
    char s[256];
    while (fscanf(textfile, "%lf %i %s", &d, &i, s) != EOF)
    {
        printf("d=%lf i=%i s=%s\n", d, i, s);
    }

    fclose(textfile);

    return 0;
}



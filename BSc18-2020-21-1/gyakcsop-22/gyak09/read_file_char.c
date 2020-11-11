

#include <stdio.h>


int main()
{
    FILE* textfile = fopen("file.txt", "r"); // r - read // olvasni
    if (textfile == NULL)
    {
        printf("Error: Unable to load file.txt\n");
        return 1;
    }

    char ch;
    /*ch = fgetc(textfile);
    printf("%c\n", ch);
    ch = fgetc(textfile);
    printf("%c\n", ch);
    ch = fgetc(textfile);
    printf("%c\n", ch);*/

    //ch = fgetc(textfile);
    while ((ch = fgetc(textfile)) != EOF) // EOF-fal jelzi a fájl végét
    {
        printf("'%c'\n", ch);
        ch = fgetc(textfile);
    }

    fclose(textfile);
    return 0;
}



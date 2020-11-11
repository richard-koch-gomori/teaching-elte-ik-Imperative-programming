

#include <stdio.h>
#include <string.h>


int main()
{
    char line[256] = "This is my first C string";
    char line2[256] = "10 20";
    char* ptr;
/*
    ptr = strtok(line, " ");
    printf("%s\n", ptr);
    ptr = strtok(NULL, " "); // NULL-al hívva azt a sztringet darabolja tovább, amit az első hívásnál átadtunk neki
    printf("%s\n", ptr);

    ptr = strtok(NULL, " ");
    printf("%s\n", ptr);

    ptr = strtok(NULL, " ");
    printf("%s\n", ptr);

    ptr = strtok(NULL, " ");
    printf("%s\n", ptr);

    ptr = strtok(NULL, " ");
    printf("%s\n", ptr);

    ptr = strtok(line2, " ");
    printf("%s\n", ptr);
*/

    for (ptr = strtok(line, " "); ptr != NULL; ptr = strtok(NULL, " "))
    {
        printf("%s\n", ptr);
    }
}



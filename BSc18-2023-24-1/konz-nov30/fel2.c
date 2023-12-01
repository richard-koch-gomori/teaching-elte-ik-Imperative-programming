// 11sor/6. feladat

#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 256

// kisetű -> nagybetű
void conv(char str[], char dest[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            //printf("str[i]: %c\n", str[i]);
            dest[i] = str[i];
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            //("str[i]: %c\n", str[i] - ('a' - 'A'));
            dest[i] = str[i] - ('a' - 'A');
        }
        else
        {
            //printf("str[i]: %c\n", str[i]);
            dest[i] = str[i];
        }
        i++;
    }
    dest[i] = '\0';
}

// A program parancssori argumentuma legyen a fájlnév
// amit be kell olvasni
int main(int argc, char* argv[])
{
    char array[ARRAY_SIZE] = "van vmi memoriaszemet";
    conv("Hello world", array);
    printf("array = %s\n", array);

    //printf("%c\n", 'C' + ('a' - 'A'));

    if (argc < 3)
    {
        printf("Usage: a.out [input] [output]\n");
        return 1;
    }
    printf("The value of argv[1]: %s\n", argv[1]);
    FILE* textfile = fopen(argv[1], "r"); // "r" - olvasást; // "w" - írás // "a" - a végéhez hozzáírást
    if (textfile == NULL)
    {
        printf("Unable to open file: %s\n", argv[1]);
        return 2;
    }

    FILE* output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Unable to open file: %s\n", argv[2]);
        return 2;
    }

    char line[ARRAY_SIZE];
    while (fgets(line, ARRAY_SIZE, textfile) != NULL)
    {
        //line[strlen(line) - 1] = '\0';
        //printf("line = %s\n", line);
        conv(line, array);
        //printf("array = %s\n", array);
        fputs(array, output);
    }
    fclose(textfile);
    fclose(output);

    return 0;
}


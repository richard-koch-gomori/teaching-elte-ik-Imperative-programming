

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    FILE* src;
    src = fopen("input.txt", "r"); // "r" olvasás, "w" írás, "a" append (hozzáírás)
    if (src == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }
    /*
    int ch;
    // fgetc(): beolvas egy karaktert a fájlból, és az aktuális pozíciót
    // a karakter után helyezi
    // a ch-nak értéket adunk, és megnézzük, hogy nem-e egyenlõ az EOF-al
    while((ch = fgetc(src)) != EOF )
    {
        printf("%c\n", ch);
    }
    */
    char line[256];
    // fgets(): beolvas egy sort (\n-el végzõdõ részletet) a fájlból
    // és az aktuális pozíciót a sor utáni karakterre állítja
    while(fgets(line, sizeof(line), src))
    {
        //printf("%s\n", line);
        int sum = 0;
        for (char* ptr = strtok(line, " "); ptr != NULL; ptr = strtok(NULL, " "))
        {
            sum += atoi(ptr);
        }
        printf("%i\n", sum);
    }
    fclose(src);
}


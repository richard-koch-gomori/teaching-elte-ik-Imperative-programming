

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    FILE* src;
    src = fopen("input.txt", "r"); // "r" olvas�s, "w" �r�s, "a" append (hozz��r�s)
    if (src == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }
    /*
    int ch;
    // fgetc(): beolvas egy karaktert a f�jlb�l, �s az aktu�lis poz�ci�t
    // a karakter ut�n helyezi
    // a ch-nak �rt�ket adunk, �s megn�zz�k, hogy nem-e egyenl� az EOF-al
    while((ch = fgetc(src)) != EOF )
    {
        printf("%c\n", ch);
    }
    */
    char line[256];
    // fgets(): beolvas egy sort (\n-el v�gz�d� r�szletet) a f�jlb�l
    // �s az aktu�lis poz�ci�t a sor ut�ni karakterre �ll�tja
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




#include <stdio.h>
#include <string.h>


int main()
{
    char src[256] = "Alma:korte:B4r4ck:szilva:D10";

/*
    // elsõ híváskor átadjuk a sztringet, amit részekre szeretnénk "vágni"
    char* ptr = strtok(src, ":");
    if (ptr != NULL) // ha a visszatérési érték nem NULL, akkor az elsõ részre mutat
    {
        printf("%s\n", ptr);

        ptr = strtok(NULL, ":"); // a következõ alkalommal NULL-al hívjuk meg
        // (egy lokális static változóból olvassa a sztringet, amíg újra
        // NULL-tól különbözõ pointer-rel hívjuk meg)
        if (ptr != NULL)
        {
            printf("%s\n", ptr);
        }
    }
*/
    for (char* ptr = strtok(src, ":"); ptr != NULL; ptr = strtok(NULL, ":"))
    {
        printf("%s\n", ptr);
    }
}


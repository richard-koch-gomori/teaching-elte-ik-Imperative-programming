

#include <stdio.h>
#include <string.h>


int main()
{
    char src[256] = "Alma:korte:B4r4ck:szilva:D10";

/*
    // els� h�v�skor �tadjuk a sztringet, amit r�szekre szeretn�nk "v�gni"
    char* ptr = strtok(src, ":");
    if (ptr != NULL) // ha a visszat�r�si �rt�k nem NULL, akkor az els� r�szre mutat
    {
        printf("%s\n", ptr);

        ptr = strtok(NULL, ":"); // a k�vetkez� alkalommal NULL-al h�vjuk meg
        // (egy lok�lis static v�ltoz�b�l olvassa a sztringet, am�g �jra
        // NULL-t�l k�l�nb�z� pointer-rel h�vjuk meg)
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




#include <stdio.h>
#include <string.h>


int main()
{
    // a mai legt�bb rendszeren a v�ltoz�k nem egym�s mellett t�rol�dnak a stack-en
    // de ez implement�ci�f�gg�
    // egy olyan rendszeren, ahol az is_admin r�gt�n a pwd ut�n t�rol�dik,
    // a k�vetkez� program k�nnyen admink�nt autentik�lhatja a felhaszn�l�t,
    // ha 20 karaktern�l t�bbet g�pel be
    char pwd[20];
    int is_admin = 0;
    printf("Enter password: ");
    // a gets() nem kapja meg, hogy mennyi a pwd max m�rete, ez�rt k�nnyen t�l�rhatja azt
    gets(pwd); // gets(&arr[0]);
    if (strcmp(pwd, "password"))
    {
        is_admin = 1;
    }
    else
    {
        printf("Wrong passwd");
    }

    /*
    scanf("%i", &i); // ok
    scanf("%s", pwd); // ugyanaz a probl�ma mint gets()-el
    */
}

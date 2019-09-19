

#include <stdio.h>

/*
char str[m�ret]; // karakterek t�mbje, karaktert�mb, karakstersorozat, sztring

karakteres adatok t�rol�s�ra
pl str[0] = 't'; str[1] = 'e'; str[2] = 's'; str[3] = 't'; str[4] = '\0';
C-ben a sztringeket a '\0' karakterrel kell z�rni, a sztringkezel� f�ggv�nyek
(pl printf(), ha ki akarjuk �ratni) a '\0' karaktert tekintik a sztring v�g�nek

inicializ�l�s pl:
char str1[5] = "test";
// a t�mb m�rete a sztring megengedett hossza + 1 (a sztrinv�g '\0' jelet is
t�rolni kell vhol)

char str2[64] = "hello"; // az 'o' bet� k�vetkez� karakter a '\0' lenne
printf("%i", str2[5]); // 0-�t �r ki ('\0' �rt�ke val�j�ban a 0 eg�sz sz�m)
*/


int main()
{
    char str[64];
    printf("�rja be a nev�t: ");
    // ha karaktert�mb�t olvasunk be, akkor a scanf()-nek �tadva kiv�telesen nem kell
    // a & oper�tort a t�mb neve el� �rni (k�s�bb megtanuljuk, h mi�rt nem)
    //scanf("%s", str);

    // a billenty�zetr�l sz�veg beolvas�sa az str t�mbbe
    // a gets() csal�d elavult, k�s�bb getline().t fogunk haszn�lni
    gets(str);

    printf("Hello, %s\n", str);
    return 0;
}


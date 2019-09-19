

#include <stdio.h>

/*
char str[méret]; // karakterek tömbje, karaktertömb, karakstersorozat, sztring

karakteres adatok tárolására
pl str[0] = 't'; str[1] = 'e'; str[2] = 's'; str[3] = 't'; str[4] = '\0';
C-ben a sztringeket a '\0' karakterrel kell zárni, a sztringkezelõ függvények
(pl printf(), ha ki akarjuk íratni) a '\0' karaktert tekintik a sztring végének

inicializálás pl:
char str1[5] = "test";
// a tömb mérete a sztring megengedett hossza + 1 (a sztrinvég '\0' jelet is
tárolni kell vhol)

char str2[64] = "hello"; // az 'o' betû következõ karakter a '\0' lenne
printf("%i", str2[5]); // 0-át ír ki ('\0' értéke valójában a 0 egész szám)
*/


int main()
{
    char str[64];
    printf("Írja be a nevét: ");
    // ha karaktertömböt olvasunk be, akkor a scanf()-nek átadva kivételesen nem kell
    // a & operátort a tömb neve elé írni (késõbb megtanuljuk, h miért nem)
    //scanf("%s", str);

    // a billentyûzetrõl szöveg beolvasása az str tömbbe
    // a gets() család elavult, késõbb getline().t fogunk használni
    gets(str);

    printf("Hello, %s\n", str);
    return 0;
}


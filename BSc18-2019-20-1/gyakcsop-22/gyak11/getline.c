

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char* buf = malloc(5);
    printf("%p\n", buf);
    // size_t: sizeof() visszat�r�si t�pusa, objektumok m�ret�nek t�rol�s�ra
    // alkalmas, eg�sz jelleg�, el�jel n�lk�li t�pus
    size_t s = 5;
    // beolvas stdin-r�l egy sort, a buf �ltal c�mzett ter�letre
    // ha a lefoglalt ter�let m�rete nem el�g nagy, realloc()-t h�v,
    // az �j m�retet pedig s-be �rja
    getline(&buf, &s, stdin);
    printf("%s\n", buf);
    printf("%i\n", s);
    printf("%p\n", buf);

    // ha buf == NULL �s s == 0, akkor a getline() malloc()-ol
}

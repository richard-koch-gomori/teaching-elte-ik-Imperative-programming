

#include <stdio.h>

/*
int foo(int arr[])
{
    printf("arr %i elemb�l �ll\n", sizeof(arr) / sizeof(int)); // ez �gy nem m�k�dik
    return 0;
}
// ha t�mb�t adunk egy f�ggv�nynek param�terk�nt, akkor egy k�l�n
// param�terben �t kell adnunk a t�mb m�ret�t is
// f�ggv�nyen bel�l nincs lehet�s�g kisz�molni/lek�rdezni a param�terk�nt
// kapott t�mb m�ret�t

// ha a kapott t�mb egy sztring, akkor ott �lhet�nk azzal a felt�telez�ssel,
// hogy a sztring v�ge '\0' karakterrel van z�rva, ez�rt sztringekn�l
// felesleges k�l�n �tadni a m�retet
*/


int main()
{
    int numbers[] = {56, 78, 34, -56, 0, 1, -1, 54, 7, 89, -2, 100, 566, 321523, -3, 87,
    0, 36, -1, -45, -25231285, 6, 14, -69, 123, 46747, 234, 7, -235, 346, 1325, -4436, 7457};

    /*
    sizeof(obj) - visszat�r obj m�ret�vel b�jtokban
    */

    printf("%i\n", sizeof(numbers) / sizeof(int)); // ha tudjuk a t�pust
    printf("%i\n", sizeof(numbers) / sizeof(numbers[0])); // az els� elem t�pusn�nak m�ret�vel osztunk
    //foo(numbers);
}


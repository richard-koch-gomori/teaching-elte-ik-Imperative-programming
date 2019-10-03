// ford�t�s: gcc std_nestedfunctions.c -o std_nestedfunctions.out -std=c90 --pedantic-errors


#include <stdio.h>


int foo()
{
    /*
    // foo2() a foo() f�ggv�nyen bel�l helyezkedik el
    // be�gyazott (nested) f�ggv�ny

    // se C90-nel, se C99-cel nem fordul, viszont -std kapcsol� n�lk�l lefordul
    // a szabv�ny nem defini�lja a be�gyazott f�ggv�nyeket, ett�l m�g a
    // gcc ismeri �s alap�rtelmez�s szerint elfogadja
    // romlik a k�d hordozhat�s�ga
    */
    int foo2() { return 2; }
    return foo2() + 5;
}


int main()
{
    printf("%i\n", foo());
    return 0;
}


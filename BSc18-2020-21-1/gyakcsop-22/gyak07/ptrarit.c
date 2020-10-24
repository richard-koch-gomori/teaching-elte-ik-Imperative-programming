// pointer aritmetika

#include <stdio.h>


int main()
{
    int arr[] = {2, 5, 7}; // a tömbök elemei egymás után tárolódnak a memóriaterületen
    int* p = &arr[0]; // p a tömb első elemének memóriacímét tartalmazza
    printf("%i\n", *p); // *p a 2-es értékre hivatkozik

    // egy pointer-hez hozzádni/kivonni 1-gyet nem a memóriacímhez ad hozzá/von ki 1-gyet
    // ADATTÍPUS* ptr;
    // ptr + c
    // itt az eredmény egy pointer, amiben a ptr-ben lévő memcím + c*sizeof(ADATTÍPUS) memóriacím van

    p = p + 1; // így tehát itt a p-ben lévő pointerhez hozzáadódik sizeof(int), és épp a tömb következő elemére mutat

    printf("%i\n", *p); // *p az 5-ös értékre hivatkozik
}



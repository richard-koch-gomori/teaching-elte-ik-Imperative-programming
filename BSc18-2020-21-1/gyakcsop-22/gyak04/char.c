// Karakter típus
// char: 1 bájton tárolt egész jellegű érték
// 'A' értéke egy egész szám, az ASCII kódtáblában hozzárendelt érték
// asciifull.gif


#include <stdio.h>


int main()
{
    char ch = 'A';
    printf("%c\n", ch); // %c nem egész számként írja ki, hanem a számnak megfelelő ASCII karaktert
    return 0;
}



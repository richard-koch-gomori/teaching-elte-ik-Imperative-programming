

#include <stdio.h>


int main()
{
    // Boros Bálint megoldása
    unsigned char ch;
    do
    {
        ch = getchar();
        printf("%02x\n", ch);
    } while (ch != EOF);

    // Vargha Csongor Csaba megoldása
    // ez is jó megoldás:
    /*
    unsigned char character;
    while ((character = getchar()) !=EOF)
    {
        printf("%02x\n", character);
    }
    */

    return 0;
}

/*
input.txt átirányítása a standard bemenetre:
program_név < input.txt

ekkor az input.txt fájlból olvas
*/


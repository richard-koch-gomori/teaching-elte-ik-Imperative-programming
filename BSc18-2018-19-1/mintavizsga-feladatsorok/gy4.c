/*
Írjon függvényt, amely egy adott sztringben megkeresi egy
mintasztring utolsó elõfordulásának kezdõindexét. Amennyiben
a minta nem található meg az adott sztringben, akkor a
visszatérési érték legyen -1. Mutassa be a függvény mûködését.

Példa input:
"1111 0000 1011 1110 0000 1010 1011 1110", minta: "1011"

Elvárt output:
30
*/


#include <stdio.h>
#include <string.h>

int strlastsample(const char str[], const char sample[])
{
    const int sample_len = strlen(sample);
    int i, j = sample_len - 1;
    for (i = strlen(str) - 1; i >= 0; --i)
    {
        if (str[i] == sample[j])
        {
            if (!j)
                return i;
            --j;
        }
        else
            j = sample_len - 1;
    }
    return -1;
}

int main()
{
    printf("result: %d\n", strlastsample("1111 0000 1011 1110 0000 1010 1011 1110", "1011"));
    return 0;
}

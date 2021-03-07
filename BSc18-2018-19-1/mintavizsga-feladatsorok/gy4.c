/*
�rjon f�ggv�nyt, amely egy adott sztringben megkeresi egy
mintasztring utols� el�fordul�s�nak kezd�index�t. Amennyiben
a minta nem tal�lhat� meg az adott sztringben, akkor a
visszat�r�si �rt�k legyen -1. Mutassa be a f�ggv�ny m�k�d�s�t.

P�lda input:
"1111 0000 1011 1110 0000 1010 1011 1110", minta: "1011"

Elv�rt output:
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

/*
�rjon tartalmaz�svizsg�lat f�ggv�nyt sztringekre:
Egy adott sztringben keress�k az els� olyan indexet,
ahol egy adott mintasztring b�rmelyik karaktere el�fordul.
Amennyiben a minta egyetlen karaktere sem fordul el� az adott
sztringben, a f�ggv�ny visszat�r�si �rt�ke legyen -1.
Mutassa be a f�ggv�ny m�k�d�s�t.

P�lda input:
"This is my first string", minta: "first"

Elv�rt output:
2
*/


#include <stdio.h>

int strany(const char str[], const char sample[])
{
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        while (sample[j] != '\0')
        {
            if(str[i] == sample[j])
                return i;
            ++j;
        }
        ++i;
        j = 0;
    }
    return -1;
}

int main()
{
    printf("result: %d\n", strany("This is my first string", "first"));
    return 0;
}

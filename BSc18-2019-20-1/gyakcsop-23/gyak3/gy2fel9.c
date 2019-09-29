

#include <stdio.h>

/*
'A' �rt�ke val�j�ban egy eg�sz sz�m (65), az A sorsz�ma az ASCII k�dt�bl�ban
a t�bl�ban minden kisbet�-nagybet� p�r k�z�tt a k�l�nbs�g ugyanannyi,
ez pedig �ppen 32, ami �gy j�n ki hogy: 'a' - 'A'
*/

char lower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 'a' - 'A';
    }
    else
    {
        return ch;
    }
}

int main()
{
    printf("%c\n", lower('a'));
    printf("%c\n", lower('G'));
    return 0;
}


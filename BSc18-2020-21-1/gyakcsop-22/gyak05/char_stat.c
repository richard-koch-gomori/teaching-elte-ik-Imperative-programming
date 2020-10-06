/*
Feladat: Olvasson be a billentyűzetről egy sztringet,
majd készítsen statisztikát a szövegben előforduló magánhangzókról.
*/


#include <stdio.h>

#define MAX_SIZE 256


int main()
{
    char text[256];
    printf("Enter a text: ");
    gets(text);
    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;

    for (int idx = 0; text[idx] != '\0'; idx++)
    {
        switch (text[idx])
        {
            case 'a':
            {
                count_a++;
                break;
            }
            case 'e':
            {
                count_e++;
                break;
            }
            case 'i':
            {
                count_i++;
                break;
            }
            case 'o':
            {
                count_o++;
                break;
            }
            case 'u':
            {
                count_u++;
                break;
            }
        }
    }

    printf("a: %i\n", count_a);
    printf("e: %i\n", count_e);
    printf("i: %i\n", count_i);
    printf("o: %i\n", count_o);
    printf("u: %i\n", count_u);

    return 0;
}



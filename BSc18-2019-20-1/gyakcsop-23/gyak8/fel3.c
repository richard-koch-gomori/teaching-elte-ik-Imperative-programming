

#include <stdio.h>
#include <stdlib.h>


char* foo(int num, char ch)
{
    char* res = (char*)malloc((num + 1) * sizeof(char));
    for (int i = 0; i < num; ++i)
    {
        *(res + i) = ch;
    }
    *(res + num) = '\0';
    return res;
}


int main()
{
    char* ptr = foo(3, 'C');
    printf("%s\n", ptr);
    free(ptr); // a foo() f�ggv�ny foglalta le a mem�riater�letet
    // a h�v� f�ggv�nynek (main()) kell felszabad�tania azt
    // probl�ma: a foo() f�ggv�ny haszn�l�j�nak eml�keznie kell arra,
    // h fel kell szabad�tani a ter�letet
}

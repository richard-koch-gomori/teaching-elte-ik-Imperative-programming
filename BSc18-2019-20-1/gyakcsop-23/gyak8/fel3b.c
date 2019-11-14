

// b

#include <stdio.h>
#include <stdlib.h>


// a foo() f�ggv�ny nem foglalt le mem�riater�letet, hanem
// megkapja azt a pointer-t, amely arra a ter�letre mutat,
// ahol dolgozhat
void foo(int num, char ch, char* ptr)
{
    for (int i = 0; i < num; ++i)
    {
        *(ptr + i) = ch;
    }
    *(ptr + num) = '\0';
}


int main()
{
    int num = 3;
    char* res = (char*)malloc((num + 1) * sizeof(char)); // a h�v� fv allok�l
    foo(3, 'C', res);
    printf("%s\n", res);
    free(res); // a h�v� fv takar�t
}

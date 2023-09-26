#include <stdio.h>

/*
C-ben minden literál tudja magáról a típusát:
5 - int
5.0 - lebegőpontos

ezért 5/2 jelentése egészosztás
5.0/2 jelentése lebegőpontos osztás
*/

/*
int main()
{
    int a = 5;
    int b = 2;

    // (float)a kasztolás/típuskonverzió: az eredmény float típusú
    float percentage = 5.0 / 2; //(float)a / b;
    printf("The value of percenttage: %f", percentage);

    return 0;
}
*/

int main()
{
    int a;
    a = 34;

    // elágazás
    if (a > 100)
    {
        printf("a");
    }
    else
    {
        printf("b");
    }
}
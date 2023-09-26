

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
    float percentage = (float)a / b;

    printf("the value of f: %f", percentage);
    return 0;
}
*/

/*
int main()
{
    float percentage = 5 / 2.0;
    printf("the value of f: %f", percentage);
    return 0;
}
*/

int main()
{
    int fraction = 5.0 / 2; // lebegőpontos érték tárolása int-ben -> a törtrész eldobódik
    printf("the value of fraction: %f", (float)fraction);
    return 0;
}



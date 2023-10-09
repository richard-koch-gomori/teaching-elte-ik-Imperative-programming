#include <stdio.h>

int main()
{
    int a = 20231009;

    int day = a % 100;
    a = a / 100;
    int month = a % 100;
    a = a / 100;

    printf("%d %d %d", day, month, a);
}


#include <stdio.h>

void foo(const int i)
{
    switch (3)
    {
        case i: // nem fordul: a case címkéjének fordítási időben ismert kifejezésnek kell lennie
            printf("0\n");
            break;
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
    }
}

int main()
{
    int x;
    scanf("%i", &x);
    foo(x);
    return 0;
}





#include <stdio.h>


int main()
{
    printf("Kerek egy szamot: ");
    int a;
    scanf("%i\n", &a);
    printf("Kerek egy masik szamot: ");
    int b;
    scanf("%i\n", &b);
    printf("a hanyados = %i\n", a / b);

    return 0;
}



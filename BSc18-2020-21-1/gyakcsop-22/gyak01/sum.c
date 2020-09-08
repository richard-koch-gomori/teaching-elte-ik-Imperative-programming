#include <stdio.h>

int main()
{
    printf("Enter az integer: ");
    int a;
    scanf("%i", &a);
    printf("Enter an another integer: ");
    int b;
    scanf("%i", &b);

    int c;
    c = a + b;
    printf("The sum: %i\n", c);

    return 0;
}



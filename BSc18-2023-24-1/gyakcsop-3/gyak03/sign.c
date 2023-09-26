#include <stdio.h>

/*
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("poz");
    }
    else
    {
        if (a == 0)
        {
            printf("zero");
        }
        else
        {
            printf("neg");
        }
    }
}
*/

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("poz");
    }
    else if (a == 0)
    {
        printf("zero");
    }
    else
    {
        printf("neg");
    }
}
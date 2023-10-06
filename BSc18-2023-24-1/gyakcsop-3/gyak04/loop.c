#include <stdio.h>
#include <stdbool.h>

bool is_prime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    /*
    int x = 12;

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("We found a divisor: %d\n", i);
            printf("x is not a prime\n");
            break;
        }
    }
    */

    if (is_prime(12))
    {
        printf("12 is a prime\n");
    }
    else
    {
        printf("12 is not a prime\n");
    }

    if (is_prime(17))
    {
        printf("17 is a prime\n");
    }
    else
    {
        printf("17 is not a prime\n");
    }

}
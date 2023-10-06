

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int x)
{
    int db = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            db++;
        }
    }
    if (db >= 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    /*
    int x = 12;
    int db = 0; // valódi osztók száma

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("we found a divisor: %d\n", i);
            db++;
        }
    }
    if (db >= 1)
    {
        printf("not a prime\n");
    }
    else
    {
        printf("prime number\n");
    }
    */

    int x = 12;

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("we found a divisor: %d\n", i);
            break;
        }
    }

    

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
/*
Feladat: Írjon olyan C függvényt, amely a paraméterként átadott num pozitív számról eldönti, hogy
prímszám-e. A függvény visszatérési értéke true prímszám esetén, illetve false, ha a szám nem prímszám
*/


#include <stdio.h>
#include <stdbool.h>


/*
5 prímszám: csak 1 és 5 osztója
*/

/*
// Ez így nem az igazi, hogy ugyanazt a kódrészletet másolgatom
int main()
{
    int num = 17;

    bool result = true;
    for (int i = 2; i < num; ++i)
    {
        //printf("i = %i\n", i);
        if (num % i == 0)
        {
            result = false;
            break;
        }
    }

    if (result)
    {
        printf("%i is a prime number\n", num);
    }
    else
    {
        printf("%i is not a prime number\n", num);
    }

    num = 20;
    result = true;
    for (int i = 2; i < num; ++i)
    {
        //printf("i = %i\n", i);
        if (num % i == 0)
        {
            result = false;
            break;
        }
    }

    if (result)
    {
        printf("%i is a prime number\n", num);
    }
    else
    {
        printf("%i is not a prime number\n", num);
    }

    return 0;
}
*/


// is_prime(): felhasználó által definiált függvény
// a függvény fejléce / szignatúrája: bool is_prime(int num)
bool is_prime(int num) // // num: formális paraméter, röviden paraméter
{
    bool result = true;
    for (int i = 2; i < num; ++i)
    {
        //printf("i = %i\n", i);
        if (num % i == 0)
        {
            result = false;
            break;
        }
    }
    return result; // result lesz a függvény visszatérési értéke
}


int main()
{
    if (is_prime(17)) // függvényhívás, num = 17; 17: aktuális paraméter, röviden argumentum
    // a feltétel kiértékelésekor ("megvizsgálásakor") is_prime(17) helyén az
    // is_prime() függvény visszatérési értéke szerepel
    {
        printf("17 is a prime number\n");
    }
    else
    {
        printf("17 is not a prime number\n");
    }

    if (is_prime(20))
    {
        printf("20 is a prime number\n");
    }
    else
    {
        printf("20 is not a prime number\n");
    }

    return 0;
}



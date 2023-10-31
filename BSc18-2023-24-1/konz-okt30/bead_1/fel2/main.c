#include <stdio.h>

/*
*/

int main()
{
    /*
    for (double i = 0; i <= 1; i = i + 0.1)
    {
        printf("%lf\n", i);
    }
    */
    for (float i = 0; i <= 1; i = i + 0.1)
    {
        printf("%f\n", i);
    }
}

/*
float f = 3.141592653;
tárolásra kevesebb érték kerül, kerekítve:
pl. f = 3.141593;
*/

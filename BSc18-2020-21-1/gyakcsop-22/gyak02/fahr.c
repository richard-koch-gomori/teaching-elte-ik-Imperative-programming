

#include <stdio.h>


int main()
{
    double c;
    double f = -20;

    while (f <= 200)
    {
        c = (5.0/9) * (f - 32);
        printf("fahr: %lf, cel: %lf\n", f, c);
        f = f + 10;
    }

    return 0;
}



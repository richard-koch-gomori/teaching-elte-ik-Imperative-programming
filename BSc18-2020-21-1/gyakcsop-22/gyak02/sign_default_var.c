

#include <stdio.h>


int main()
{
    //int number; // number tartalma még inicializálatlan
    // inicializáció: kezdőérték adás
    int number = 10;
    printf("number: %i\n", number);

    if (number < 0)
    {
        printf("negativ\n");
    }
    else if (number > 0)
    {
        printf("pozitiv\n");
    }
    else
    {
        printf("nulla\n");
    }

    return 0;
}



// Mi történik, ha egy függvény egy lokális változóra mutató mutatót ad vissza, amit dereferálunk?

#include <stdio.h>


// Írjon C függvényt, amely a ch karaktert n-szer
// egymás mellé írja egy sztringbe!
char* create_string(char ch, int n)
{
    char dest[256];
    int i = 0;
    for (; i < n; ++i)
    {
        dest[i] = ch;
    }
    dest[i] = '\0';
    return dest; // NAGYON ROSSZ megoldás: lokális változó memóriacímével tér vissza
}

int main()
{
    printf("result: %s\n", create_string('C', 5));
}



#include <stdio.h>

// Írjon C függvényt, amely a ch karaktert n-szer
// egymás mellé írja egy sztringbe!
void create_string(char ch, int n, char dest[])
{
    int i = 0;
    for (; i < n; ++i)
    {
        dest[i] = ch;
    }
    dest[i] = '\0';
}

int main()
{
    char result[256] = "vmi memoria szemet";
    create_string('C', 5, result); // azzal nem foglalkozunk, h result elég nagy-e
    printf("result: %s\n", result);
}


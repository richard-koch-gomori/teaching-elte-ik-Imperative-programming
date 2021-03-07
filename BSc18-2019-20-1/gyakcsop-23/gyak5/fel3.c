

#include <stdio.h>
#include <math.h>
#include <string.h>


// ebben a megoldásban átadjuk a sztring (karaktertömb) méretét
int StrToInt(char str[], int size)
{
    int res = 0;
    for (int i = size - 1; i >= 0; --i)
    {
        res = res + (str[i] - '0') * pow(10, size - 1 - i);
    }
    return res;
}

// másik megoldás
int StrToInt2(char str[])
{
    int res = 0;
    int len = strlen(str);
    for (int i = len - 1; i >= 0; --i)
    {
        res = res + (str[i] - '0') * pow(10, len - 1 - i);
    }
    return res;
}


int main()
{
    int i = StrToInt("45123", 5);
    printf("res %i\n", i);
}


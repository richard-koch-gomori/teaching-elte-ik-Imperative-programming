

#include <stdio.h>


int main(int argc, char* argv[])
{
/*
    // karaktertöbök
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "sullyed a harossz";

    // arr egy olyan 3 elemű tömb, amely karakterre mutató pointer-eket tárol
    char* arr[3];
    arr[0] = str1;
    arr[1] = str2;
    arr[2] = str3;

    // arr[1] egy karakter mutatója, így printf() %s -el kiírja azt a sztringet, aminek első karakterére mutat
    printf("%s\n", arr[1]);
*/

    //printf("argc = %i\n", argc);
    //printf("argv[0]: %s\n", argv[0]);
    //printf("argv[1]: %s\n", argv[1]);
    //printf("argv[2]: %s\n", argv[2]);

    // argc: program argumentumok száma
    // argv[i] az i-edik program argumengtum (ami egy sztring) első elemének mutatója
    for (int i = 1; i < argc; ++i)
    {
        printf("%s\n", argv[i]);
    }
}



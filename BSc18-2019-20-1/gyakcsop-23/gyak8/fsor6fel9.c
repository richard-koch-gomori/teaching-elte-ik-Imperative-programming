

#include <stdio.h>


int main()
{
    //char* pointer = "alfa"; // nem írható memterületen tárolódik
    char msg[] = "alfa"; // stack-en tárolódik
    char* pointer = &msg[0];
    //char* pointer = msg; // ugyanaz mint a feletti sor

    printf("%c\n", *(pointer++) ); // a; pointer az l-re mutat
    printf("%c\n", (*pointer)++ ); // l; pointer az m-re mutat
    printf("%c\n", ++(*pointer) ); // n; pointer az n-re mutat

    return 0;
}


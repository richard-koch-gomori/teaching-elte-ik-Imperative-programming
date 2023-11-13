#include <stdio.h>


int main()
{
    char name[10];
    printf("Enter your name: ");
    scanf("%s", name); // vagy: gets(name); // mindkettő túl tudja írni name-t
    printf("Hello %s\n", name);
}



#include <stdio.h>


int main()
{
    printf("Enter a year: ");
    int year;
    scanf("%d", &year);
    int b = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    printf(b ? "leapyear" : "not leapyear");
}



#include <stdio.h>


int main()
{
    int sum;
    int a, b;
    printf("Enter a number: ");

    // egész beírása és ENTER billentyűnyomásig felfüggeszti a program futását
    // amit a felhasználó beír egész számot a billentyűzeten, az `a` változóba kerül
    scanf("%d", &a); // %d mert egészet olvasunk be, a változó neve elé ki kell tenni az ampersand (&) jelet

    printf("Enter a number: ");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum of the two numbers: %d", sum);
    return 0;
}
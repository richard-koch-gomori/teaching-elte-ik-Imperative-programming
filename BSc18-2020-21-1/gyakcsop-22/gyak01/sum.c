#include <stdio.h>


int main()
{
    printf("Enter az integer: ");
    int a;

    // scanf()-el olvasunk be a billentyűzetről
    // egy ilyen scanf() hívás esetén a program végrehajtása ezen a ponton "megáll"
    // folytatódik, ha a felhasználó leüti az enter billentyűt
    // az a változóba kerül az, amit a felhasználó begépelt
    scanf("%i", &a);

    printf("Enter an another integer: ");
    int b;
    scanf("%i", &b);

    int c;
    c = a + b;
    printf("The sum: %i\n", c);

    return 0;
}



#include <stdio.h>

#define PI 3.141592

int main()
{
    //const double pi = "3.141592";
    //pi = 10;
    printf("Enter radius: ");
    double radius;
    scanf("%lf", &radius);
    printf("k = %lf \n", 2 * radius * PI);
    printf("a = %lf \n", 2 * radius);
    printf("t = %lf \n", radius * radius * PI);
}


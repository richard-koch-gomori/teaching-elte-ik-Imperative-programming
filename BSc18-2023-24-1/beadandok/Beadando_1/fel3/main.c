

#include <stdio.h>


int main()
{
	
	float radius;
	printf("Radius: ");
	scanf("%f", &radius);
	
	float diameter = 2 * radius;
	float circumference = 2 * 3.14 * radius;
	float area =  3.14 * radius * radius;
	
	printf("Diameter: %f\n", diameter);
	printf("Circumference: %f\n", circumference);
	printf("Area: %f\n", area); 

    return 0;
}

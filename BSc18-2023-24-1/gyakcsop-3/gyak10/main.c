#include <stdio.h>

#include "my_util.h"

int main()
{
	foo();
	foo();
	foo();
	
	int i = 10;
	int j = 20;
	printf("%d %d \n", i, j);
	swap(&i, &j);
	printf("%d %d \n", i, j);
	
	printf("greater: %d\n", *(greater(&i, &j)));
}


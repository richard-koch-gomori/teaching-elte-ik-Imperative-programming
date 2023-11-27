#include "my_util.h"
#include <stdio.h>



void foo()
{
	static int i = 0;
	printf("i = %d\n", i);
	i++;
}

void swap(int* i, int* j)
{
	int x = *i;
	*i = *j;
	*j = x;
}


int* greater(int* i, int* j)
{
	if (*i > *j)
	{
		return i;
	}
	return j;
}

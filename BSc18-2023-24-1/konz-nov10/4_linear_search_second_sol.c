#include <stdio.h>
#define NUMBER_OF_ITEMS 5
 
int main()
{
	int array[NUMBER_OF_ITEMS]={5, 10, 100, 200, 300};
	int search=100;
	int found =1;
	for(int i=0; i<NUMBER_OF_ITEMS; i++)
	{
		if(array[i]==search)
		{
			found=0;
		}
	}
	if(found==0)
	{
		printf("A keresett szam szerepel a tombben!\n");
	}
	return 0;
}

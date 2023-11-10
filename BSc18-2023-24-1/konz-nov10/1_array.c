// Addott 10 elemű tömbben tároljunk egész számokat és adjuk össze őket.

#include <stdio.h>

int main()
{
	/*
	int x = 10;
	x = x + 1;
	printf("x = %d\n", x);
	*/
	
	int array[10];
	array[0] = 100;
	array[1] = 200;
	array[2] = 200;
	array[3] = 300;
	array[4] = -452;
	array[5] = 546;
	array[6] = 44;
	array[7] = 1;
	array[8] = 2;
	array[9] = 3;
	
	int sum = 0;
	//sum = array[0] + array[1] + array[2] + array[3] + array[4] + array[5] + array[6] + array[7] + array[8] + array[9];
	for (int i = 0; i < 10; i++) // az i az elem sorszáma, array[i] pedig a tömbbeli elem
	{
		printf("The current value of i = %d\n", i);
		printf("The current value in the array = %d\n", array[i]);
		//sum = sum + array[i];
		sum += array[i];
	}
	
	printf("The sum of the array: %d\n", sum); 
}


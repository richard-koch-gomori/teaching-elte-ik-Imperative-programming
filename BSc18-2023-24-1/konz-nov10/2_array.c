// A billentyűzetről olvassunk be 10. db számot és azokat adjuk össze.

#include <stdio.h>

// az elemek száma
// preprocesszor / előfeldolgozói szimbólum
#define NUMBER_OF_ITEMS 20


int main()
{
	/*
	int x = 10;
	x = x + 1;
	printf("x = %d\n", x);
	*/
	
	int array[NUMBER_OF_ITEMS];
	
	for (int i = 0; i < NUMBER_OF_ITEMS; i++)
	{
		int input;
		printf("Enter an integer: ");
		scanf("%d", &input); // a billentyűzetről olvassunk be egész számot az 'input' változóba
		array[i] = input;
	}
	
	int sum = 0;
	//sum = array[0] + array[1] + array[2] + array[3] + array[4] + array[5] + array[6] + array[7] + array[8] + array[9];
	for (int i = 0; i < NUMBER_OF_ITEMS; i++) // az i az elem sorszáma, array[i] pedig a tömbbeli elem
	{
		printf("The current value of i = %d\n", i);
		printf("The current value in the array = %d\n", array[i]);
		//sum = sum + array[i];
		sum += array[i];
	}
	
	printf("The sum of the array: %d\n", sum); 
}


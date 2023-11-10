// Döntsük el, hogy adott tömbben szerepel-e egy konkrét érték.

#include <stdio.h>
#include <stdbool.h>

#define NUMBER_OF_ITEMS 10

int main()
{
    int array[NUMBER_OF_ITEMS] = {5, 10, 100, 200, 300, 400, 2, 3, 88, 99};
    int search = 100;
    
    // bool típus, kétféle értéket vehet fel: false (hamis), true (igaz)
    bool found = false;
    for (int i = 0; i < NUMBER_OF_ITEMS; i++)
    {
		printf("Az array aktualis eleme: %d\n", array[i]);
		if (array[i] == search)
		{
			printf("A keresett ertek szerepel a tombben!\n");
			found = true;
			break;
		}
		printf("\n");
	}
	printf("Ciklus utan\n");
	if (found)
	{
		// volt találat
	}
	else
	{
		// nincs találat
		printf("A keresett ertek NEM szerepel a tombben!\n");
	}
	
	return 0;
}


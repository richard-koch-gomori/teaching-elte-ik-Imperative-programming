// Döntsük el, hogy adott tömbben szerepel-e egy konkrét érték.

#include <stdio.h>
#include <stdbool.h>

#define NUMBER_OF_ITEMS 10


// forward declaration
bool linsearch(int array[], int size, int search);


int main()
{
    int array[NUMBER_OF_ITEMS] = {5, 10, 100, 200, 300, 400, 2, 3, 88, 99};
    
    // bool típus, kétféle értéket vehet fel: false (hamis), true (igaz)
    if (linsearch(array, NUMBER_OF_ITEMS, 100))
    {
		// volt találat
		printf("A keresett ertek szerepel a tombben!\n");
	}
	else
	{
		// nincs találat
		printf("A keresett ertek NEM szerepel a tombben!\n");
	}
	
	
	
	int array2[] = {1, 2, 3, 4, 5};
    if (linsearch(array2, 5, 6))
    {
		// volt találat
		printf("A keresett ertek (6) szerepel a tombben!\n");
	}
	else
	{
		// nincs találat
		printf("A keresett ertek (6) NEM szerepel a tombben!\n");
	}
	
	
	return 0;
}


bool linsearch(int array[], int size, int search)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
		if (array[i] == search)
		{
			found = true;
			break;
		}
	}
	return found;
}


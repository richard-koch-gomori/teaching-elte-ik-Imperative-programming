// VÁZLAT!


#include <stdio.h>


// sorokat 1-től 10-ig számokkal, az oszlopokat A-tól J-ig betűvel


#define SIZE 10


void init(array , count_of_ships )
{
	// üresre állítja
}

void printTable(array)
{
}

int ColToInt(char col)
{
// vagy switch case szebb ...
	if (col == 'A') return 0;
	if (col == 'B') return 1;
	// ...
}

bool submit(int array[SIZE][SIZE], int count_of_ships[], char col, int row, int len, char mode)
{
	int i = row - 1;
	int j = ColToInt(col);
	
	// A1-re:
	// i == 0, j == 0
	
	if (mode == '|')
	{
		for (x = 0..len-1)
		{
			// TODO: ellenőrizni h mind szabad, és ha igen, beállítani; ha nem, hamissal visszatérni
			array[i + x][j]
		}
	}
	else
	{
		
	}
}

int main()
{
	int array[SIZE][SIZE];
	int count_of_ships[5]; // hajó hosszúságok idx 0 - 2, idx 1 - 3, idx 2 - 3, idx 3 - 4, idx 4 - 5
	
	
	
	init(array, count_of_ships);
	
	submit(array, 'A', 1, 3, '|');
	// eredménye:
	/*
	1 0 0 0 0 0 0 0 0 0
	1 0 0 0 0 0 0 0 0 0
	1 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	*/
	
	
	submit(array, 'I', 3, 2, '_');

	// stb ...
	
}


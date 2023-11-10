#include <stdio.h>

#define ROW 4
#define COL 2

void foo(double array[ROW][COL])
{
    for (int i = 0; i < ROW; i++)
    {
		for (int j = 0; j < COL; j++)
		{
			printf("%lf\n", array[i][j]);
		}
	}
}

int main()
{
	// X, Y koordináták
    double coordinates[ROW][COL] =  { // 4 sor és 2 oszlop
    { 11.5, -7.1 },
    { 13.56, 12.1 },
    { 7.34, 11.4 },
    { 78.4, 333 } 
    };
    
    foo(coordinates);
}


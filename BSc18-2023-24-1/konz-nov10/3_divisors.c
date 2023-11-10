// Olvassunk be a felhasználótól egy intervallum két végpontját.
// Írjuk ki a képernyőre a 7-tel vagy 11-gyel osztható számokat.

// 20
// 40

// 21
// 22
// 28
// ...


/*
int x = 21;
printf("%d", x % 7); // 0
x = 22;
printf("%d", x % 7); // 1
*/

// Matuz Milán megoldása

#include <stdio.h>
 
 
int main()
{
	int vegpont1,vegpont2;
	printf("Adja meg az elso pontot: ");
	scanf("%d", &vegpont1); // pl. 20
	printf("Adja meg az masodik pontot: ");
	scanf("%d", &vegpont2); // pl. 40
	
	if (vegpont1 > vegpont2)
	{
		printf("Hibas input, a masodik szamnak nagyobbnak kell lennie!");
		return 1; // 1 : a program hibával fejeződik be
	}
	
	// 
	int i;
	for(i = vegpont1; i <= vegpont2; i++) // i = 20, 21, 22, ..., 40
	{
		if( i % 7 == 0)
		{
			printf("%d\n", i);
		}
		else if(i % 11 ==0 )
		{
			printf("%d\n", i);
		}
	}
	
	// C a main() végén illik return 0;-át írni
	// nem volt hiba
	return 0; // ha nem írjuk ki a return 0-át a main() végére, akkor a fordítóprogram "odaérti"
}

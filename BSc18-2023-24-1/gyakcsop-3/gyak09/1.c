#include <stdio.h>

// globális változó minden blokkban elérhető (a definiálás helyétől kezdődően)
int x = 20;


// forward declaration (elődeklarálás)
void foo(int);

int main()
{
     printf("%d\n", x);
     
     foo(12);
}

void foo(int param)
{
    int x = 10;
    printf("%d\n", x);
    
    /*
    int i = 1; // ciklusváltozó ciklus elé hozatala, hogy a ciklus után is hivatkozható legyen
    for ( ; i < 10; i++)
    {
    }
    i//
	*/
	
	
	// scope (blokk)
	{
		//int y = 3;
		// ...
		// y a blokk elején létrejön, a blokk végén törlődik
	}
	
	//printf("%d\n", y);
	
	printf("%d\n", param);
	
}

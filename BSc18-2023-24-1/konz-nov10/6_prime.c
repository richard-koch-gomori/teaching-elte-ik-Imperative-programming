// Prímkeresés
// Billentyűzetről olvassunk be egész számot, döntsük el, h prímszám-e.
// primes tömbben tároljuk a prímszámokat;
// ha a felhasználó által beírt szám szerepel a tömbben, 
// akkor ne vizsgáljuk újra h prím-e hanem csak írjuk ki h prím

// 20
// 20 -> NEM prímszám

// 7
// 7 -> PRÍMSZÁM; primes = {7}

// 6
// 6 -> NEM PRÍMSZÁM

// 7
// 7 az már benne a primes tömbben, PRÍM

// 11
// 11 -> PRÍMSZÁM, primes = {7, 11}

// 346347323634747 

#include <stdio.h>

#define MAX_NUMBERS 10

int main()
{
	int primes[MAX_NUMBERS];
	
	while (1) // végtelen ciklus
	{
		int num;
		printf("Enter a number: ");
		scanf("%d", &num);
		
		// num a szerepel-e primes-ban
		// ha szerpel, akkor tudjuk h prím
		// ha nem szerpel
		//{
		//    is_prime(num) -> igaz akkor primes-ba betesszük; ha hamis, akkor nem tesszük be
		//}
	}
}





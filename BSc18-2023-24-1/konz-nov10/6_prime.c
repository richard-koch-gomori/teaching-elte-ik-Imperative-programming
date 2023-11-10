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
#include <stdbool.h>

#define MAX_NUMBERS 10

bool is_prime(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
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

int main()
{
	//printf("%d\n", is_prime(10));
	//printf("%d\n", is_prime(11));
	//printf("%d\n", is_prime(17));
	//printf("%d\n", is_prime(100));



	int primes[MAX_NUMBERS];
	int size = 0;
	
	while (1) // végtelen ciklus
	{
		int num;
		printf("Enter a number: ");
		scanf("%d", &num);
		
		// num a szerepel-e primes-ban
		if (linsearch(primes, size, num))
		{
			// tudjuk h num prím
			printf("%d is a prime number (read from primes array)\n", num);
		}
		else
		{
			// ha nem szerpel
			if (is_prime(num))
			{
				// primes-ba betesszük num-ot
				// primes[0] = 7;
				primes[size] = num;
				size++;
				
				printf("%d is a prime number\n", num);
			}
			else
			{
				printf("%d is NOT a prime number\n", num);
			}
		}
	}
}





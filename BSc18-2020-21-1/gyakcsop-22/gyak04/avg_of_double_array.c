/*
Olvassa be, hogy hány double értéket szeretne átlagolni, majd olvasson be tömbbe
pontosan ennyi double értéket, majd írja vissza az átlagukat.
*/


#include <stdio.h>


#define MAX_SIZE 10000


int main()
{
    printf("Enter the number of items you want to sum ");
    int num;
    scanf("%i", &num);

    if (num > MAX_SIZE)
    {
        printf("Sorry bro, %i is the max for num\n", MAX_SIZE);
    }
    else
    {
        double array[MAX_SIZE];

        for (int i = 0; i < num; ++i)
        {
            printf("Enter an num: ");
            scanf("%lf", &array[i]);
        }

        double sum = 0;
        for (int i = 0; i < num; ++i)
        {
            sum = sum + array[i];
            // sum += array[i];
        }
        printf("Avg: %lf\n", sum / num);
    }

    return 0;
}



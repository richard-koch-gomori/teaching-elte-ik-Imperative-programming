/*
Olvassa be, hogy hány double értéket szeretne átlagolni, majd olvasson be
majd tároljon a heap-en pontosan ennyi double értéket, majd írja vissza az átlagukat.
*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Enter the number of items you want to sum ");
    size_t num;
    scanf("%zu", &num);

    double* array = malloc(num * sizeof(num));

    for (int i = 0; i < num; ++i)
    {
        printf("Enter an num: ");
        scanf("%lf", &array[i]); // array[i] // *(array + i)
        //scanf("%lf", array + i); // &array[i] és array + i ugyanazt a pointer-t jelentik
    }

    double sum = 0;
    for (int i = 0; i < num; ++i)
    {
        sum = sum + array[i];
        // sum += array[i];
    }
    printf("Avg: %lf\n", sum / num);

    free(array);

    return 0;
}


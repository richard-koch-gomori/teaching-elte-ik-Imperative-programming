// előző órán:

// Írj egy függvényt, ami egy paraméterül kapott tömbben lévő elemek összegével
// tér vissza.

// Korábbi tömbös megoldás:
// https://github.com/richard-koch-gomori/teaching-elte-ik-Imperative-programming/blob/master/BSc18-2023-24-1/gyakcsop-4/gyak06/array.c

// Írj egy függvényt, ami egy paraméterül kapott tömbben lévő elemek összegével tér vissza.
// A tömböt az első elemre mutató mutató és egy hosszt tartalmazó egész változó segítségével adjuk át!
// Írjuk meg a függvényt, hogy a [] operátor használata nélkül is, pointer aritmetika segítségével.
// Ki lehet találni a tömb méretét a függvényen belül a hosszt tartalmazó változó nélkül?


#include <stdio.h>


void print_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

int summarize(int* array, int size)
{
    int sum = 0;
    for (int idx = 0; idx < size; idx++)
    {
        sum += *(array + idx);
    }
    return sum;
}


int main()
{
    int array[] = {5, 10, -12, 20, 30};

    print_array(array, 5);

    int* item = &array[0];
    *item = -1000;
    print_array(array, 5);
    item = item + 1;
    *item = -2000;
    print_array(array, 5);

    item = array;
    printf("idx 0 : %d\n", *item);
    printf("idx 1 : %d\n", *(item + 1));
    printf("idx 4 : %d\n", *(item + 4));



    printf("sum = %d\n", summarize(array, 5));

}


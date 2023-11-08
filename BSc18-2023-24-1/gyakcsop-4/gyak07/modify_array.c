#include <stdio.h>

// láttuk, hogy C-ben a paraméterek módosítása nincs hatással a 
// függvényhíváskor a paraméterlistára írt változóra:
// https://github.com/richard-koch-gomori/teaching-elte-ik-Imperative-programming/blob/master/BSc18-2023-24-1/gyakcsop-3/gyak06/pass_by_value.c#L20

// a TÖMBÖK NEM ilyenek
// a tömbök elemeit tudja módosítani a függvény:

void print_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

// Írjon függvényt, amely a paraméterként kapott egészeket tartalmazó tömb
// minden elemét megszorozza 2-vel!
void multiple_by_2(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        array[i] *= 2; // a main()-ben lévő data[] tömb elemeit MÓDOSÍTJA!
    }
}

int main()
{
    int data[] = {-5, 8, 10, 500};
    print_array(data, 4);
    multiple_by_2(data, 4);
    print_array(data, 4);
}


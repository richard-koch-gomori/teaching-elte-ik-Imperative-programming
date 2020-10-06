#include <stdio.h>


// a void nem típus, hanem egy kulcsszó, a típus hiányát jelöli
// PrintIntArray() olyan függvény, amely nem ad vissza értéket
void PrintIntArray(int array[], int size)
{
    // ha függvénynek híváskor tömböt adunk paraméterként,
    // akkor a függvény törzsében a sizeof(array)/sizeof(array[0]) NEM a tömb méretét adja
    // később metanuljuk h miért
    // következmény: ha tömböt adunk át függvénynek, akkor át kell adni külön paraméterként a tömb méretét is
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", array[i]);
    }
}


int main()
{
    int arr1[5] = {2, 3, 5, 7, 11};
    PrintIntArray(arr1, 5); // híváskor figyelni kell, hogy a tömb méretét is át kell adni

    int arr2[10] = {2, 3, 5, 7, 11, -2, -3, -5, -7, -11};
    PrintIntArray(arr2, 10); // híváskor figyelni kell, hogy a tömb méretét is át kell adni
    return 0;
}



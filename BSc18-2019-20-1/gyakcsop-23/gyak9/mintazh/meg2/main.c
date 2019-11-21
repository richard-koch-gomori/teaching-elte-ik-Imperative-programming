

#include <stdio.h>

// a func.h tartalma ford�t�skor a k�vetkez� sor hely�re m�sol�dik
#include "func.h"


// a forr�sk�d �gy szebb, mintha be�getett-, magic number-eket
// haszn�ln�nnk a k�dban; DEST_ARRAY_SIZE besz�desebb, mint annyi h 200
#define ARRAY_SIZE 100
#define DEST_ARRAY_SIZE 200


int main()
{
    int arr1[ARRAY_SIZE];
    int arr2[ARRAY_SIZE];
    int dest[DEST_ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        arr1[i] = i;
        arr2[i] = 2*i;
    }

    CopyOrderedArray(arr1, ARRAY_SIZE, arr2, ARRAY_SIZE, dest);
    for (int i = 0; i < DEST_ARRAY_SIZE; ++i)
    {
        printf("%i ", dest[i]);
    }
}

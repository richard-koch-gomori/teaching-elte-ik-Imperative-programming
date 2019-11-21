

#include <stdio.h>


#define ARRAY_SIZE 100
#define DEST_ARRAY_SIZE 200


void CopyOrderedArray(int s[], int size1, int z[], int size2, int sz[])
{
    int i = 0; // firstindex: a tömb elsõ valid indexe
    int j = 0;
    int k = 0;

    // lastindex: a tömb utolsó valid indexe, ami méret - 1
    while (i <= size1 - 1 || j <= size2 - 1)
    {
        if (j > size2 - 1 || (i <= size1 - 1 && s[i] <= z[j]))
        {
            sz[k] = s[i]; // sz[k] == *(sz + k)
            ++i;
        }
        else
        {
            sz[k] = z[j];
            ++j;
        }
        ++k;
    }
}


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



#include <stdio.h>
#include <stdlib.h>

#include "foo.h"


int main()
{
    int usr_input;
    printf("Enter size: ");
    scanf("%i", &usr_input);

    int* arr = malloc(usr_input * sizeof(int));
    if (arr == NULL)
    {
        printf("No memory\n");
        return 1;
    }

    for (int i = 0; i < usr_input; ++i)
    {
        arr[i] = i;
        //scanf("%i", &arr[i]); // a végsõ megoldás ez, csak órán futtatáskor nem akarunk 50 elemet kézzel bevinni
    }

    int* arr1 = malloc(usr_input * sizeof(int));
    if (arr1 == NULL)
    {
        printf("No memory\n");
        return 1;
    }

    int* arr2 = malloc(usr_input * sizeof(int));
    if (arr2 == NULL)
    {
        printf("No memory\n");
        return 1;
    }

    // lehetne egyben is:
    /*
    if (arr == NULL || arr1 == NULL || arr2 == NULL)
    {
        printf("Error: Memory alloc failed\n");

        // ha volt lefoglalt, felszabadítjuk
        // ez korrekt, mert free(NULL); nem csinál semmit
        free(arr);
        free(arr1);
        free(arr2);

        return 1;
    }
    */

    int num_of_even, num_of_odds;

    foo(arr, usr_input, usr_input, arr1, &num_of_even, arr2, &num_of_odds);
    
    printf("Even: " );
    PrintArray(arr1, num_of_even);
    printf("\n");

    printf("Odd: ");
    PrintArray(arr2, num_of_odds);
    printf("\n");
    
    free(arr);
    free(arr1);
    free(arr2);

    return 0;
}


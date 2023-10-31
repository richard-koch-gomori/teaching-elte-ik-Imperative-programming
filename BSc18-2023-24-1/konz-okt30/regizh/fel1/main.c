#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER_OF_ITEMS 50

void print_array(int array_to_print[], int size)
{
    printf("size of array: %d\n", size);
    for (int i = 0; i < size; ++i)
    {
        printf("%d, ", array_to_print[i]);
    }
}

int main()
{
    srand(time(NULL));
    int array[NUMBER_OF_ITEMS];
    for (int i = 0; i < NUMBER_OF_ITEMS; i++)
    {
        // %51 : 0 és 50 között legyenek a számok
        array[i] = rand() % 51;
    }
    
    int even[NUMBER_OF_ITEMS]; // páros
    int odd[NUMBER_OF_ITEMS]; // ptlan
    int number_of_even = 0;
    int number_of_odd = 0;
    
    for (int i = 0; i < NUMBER_OF_ITEMS; i++)
    {
        if (array[i] % 2 == 0) // páros
        {
            even[number_of_even] = array[i];
            number_of_even++;
        }
        else // ptlan
        {
            odd[number_of_odd] = array[i];
            number_of_odd++;
            
            //odd[number_of_odd++] = array[i];
        }
        
    }
    
    printf("even: ");
    print_array(even, number_of_even);
    
    printf("\n\n");
    
    
    printf("odd: ");
    print_array(odd, number_of_odd);
    
    

}


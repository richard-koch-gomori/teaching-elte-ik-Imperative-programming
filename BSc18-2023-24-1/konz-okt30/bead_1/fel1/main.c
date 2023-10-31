
#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("number = %d\n", number);
    
    /*
    pl. 8 osztói:
    1 2 3 4 5 6 7 8
    8 % 1 == 0 -> 1 osztó
    8 % 2 == 0 -> 2 osztó
    8 % 3 == 2 -> a 3 nem osztó
    */
    
    // i++ // i = i + 1;
    for (int i = 1; i <= number; i++)
    //for (int i = 1; i <= number; i = i + 1)
    {
        //printf("the current value of i = %d\n", i);
        
        if (number % i == 0)
        {
            printf("divisor: %d\n", i);
        }
    }
}


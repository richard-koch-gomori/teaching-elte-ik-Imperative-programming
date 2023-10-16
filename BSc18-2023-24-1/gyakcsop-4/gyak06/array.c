#include <stdio.h>

// C-ben a tömbök nem tudják magukról a méretüket, ezért külön paraméterben át kell adni a tömb méretét
int summarize(int array[], int size)
{
    int sum = 0;
    for (int idx = 0; idx < size; idx++)
    {
        sum += array[idx];
    }
    return sum;
}

int main()
{
    //int array[3];
    //for (int idx = 0; idx < 3; idx++) array[idx] = 0;


    int array[10] = {5, 10, -12, 20, 30};

    /*
    int sum = 0;
    for (int idx = 0; idx < 3; idx++)
    {
        sum += array[idx];
    }
    printf("sum = %d\n", sum);
    */

    printf("sum = %d\n", summarize(array, 10));
}
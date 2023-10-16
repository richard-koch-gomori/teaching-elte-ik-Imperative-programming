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
    int array[10] = {6, 10, -23, 4, 5, 1, 2, 3, 4, 5};
    printf("sum = %d\n", summarize(array, 10));

}

/*
int main()
{
    //int array[3];
    //for (int idx = 0; idx < 3; idx++) array[idx] = 0;

    int array[3] = {6, 10, -23};
    int sum = 0;
    for (int idx = 0; idx < 3; idx++)
    {
        sum += array[idx];
    }
    printf("um = %d\n", sum);
}
*/


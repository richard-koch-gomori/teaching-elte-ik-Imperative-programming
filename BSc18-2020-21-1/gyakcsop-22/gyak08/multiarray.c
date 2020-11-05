/*
Írjon C függvényt, amely paraméterként kap egy kétdimenziós tömböt, és előállít egy
olyan tömböt, amely a sorok átlagát tartalmazza.
*/


#include <stdio.h>


#define ARR_SIZE 3


void foo(double arr[][ARR_SIZE], double res[])
{
    for (int i = 0; i < ARR_SIZE; ++i)
    {
        res[i] = 0;
        for (int j = 0; j < ARR_SIZE; ++j)
        {
            res[i] += arr[i][j];
        }
        //res[i] = res[i] / ARR_SIZE;
        res[i] /= ARR_SIZE;
    }
}


int main()
{
/*
    int arr[3][2] = {
    {1, 3},
    {-3, 6},
    {1, 2}
    };
     _ _
     _ _
     _ _

    printf("%i\n", arr[0][1]);
*/


    double arr[ARR_SIZE][ARR_SIZE] = {
    {1, 2, 3},
    {1.4, 5.6, 1},
    {-1, 4.4, 3}
    };
    double res[ARR_SIZE];
    foo(arr, res);
    for (int i = 0; i < ARR_SIZE; ++i)
    {
        printf("%lf\n", res[i]);
    }
}



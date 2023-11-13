// Alakítsuk át az előző függvényt, hogy első elemre mutató mutató,
// és utolsó elem után mutató mutató segítségével kapjuk meg a tömböt.
// Mi történik, ha túlindexelünk eggyel? Mi történik, ha többel indexelünk túl?


#include <stdio.h>


void print_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

int summarize(int* begin, int* end)
{
    int sum = 0;
    for (int* iter = begin; iter != end; iter++)
    {
        sum += *iter;
    }
    //printf("*end : %d\n", *end);
    //printf("*(end + 4) : %d\n", *(end + 4));
    return sum;
}


int main()
{
    int array[] = {5, 10, -12, 20, 30};

    print_array(array, 5);

    int* item = &array[0];
    *item = -1000;
    print_array(array, 5);
    item = item + 1;
    *item = -2000;
    print_array(array, 5);

    item = array;
    printf("idx 0 : %d\n", *item);
    printf("idx 1 : %d\n", *(item + 1));
    printf("idx 4 : %d\n", *(item + 4));



    printf("sum = %d\n", summarize(array, array + 5));

}


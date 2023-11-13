// Alakítsuk át az előző feladatot, hogy átlagot számoljon.
// Hogyan tudjuk kiszámolni a tömb méretét a mutatópárból?


#include <stdio.h>


void print_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

double avg(int* begin, int* end)
{
    int sum = 0;
    for (int* iter = begin; iter != end; iter++)
    {
        sum += *iter;
    }
    //printf("*end : %d\n", *end);
    //printf("*(end + 4) : %d\n", *(end + 4));
    printf("size: %d\n", end - begin);
    return sum / (end - begin);
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



    printf("sum = %lf\n", avg(array, array + 5));

}


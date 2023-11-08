#include <stdio.h>
#include <limits.h>

int sec_minsearch(int data[], int size)
{
    int min = INT_MAX;
    int sec_min = INT_MAX;
    for (int i = 0; i < size; ++i)
    {
        if (data[i] < min)
        {
            sec_min = min;
            min = data[i];
        }
        else
        {
            if (data[i] < sec_min && data[i] != min)
            {
                sec_min = data[i];
            }
        }
    }
    return sec_min;
}


int main()
{
    int array[] = {4, -7, -50, -100, 87};
    int item = sec_minsearch(array, sizeof(array) / sizeof(array[0]));
    if (item == INT_MAX)
    {
        printf("error");
        return 1;
    }
    printf("item: %d\n", item);
    return 0;
}

#include <stdio.h>

int minsearch(int data[], int size)
{
    if (size == 1)
    {
        return 0;
    }
    if (size <= 0)
    {
        return -1;
    }
    int min_idx = 0;
    for (int i = 1; i < size; ++i)
    {
        if (data[i] < data[min_idx])
        {
            min_idx = i;
        }
    }
    return min_idx;
}

int main()
{
    int array[] = {7, 9, 10, -76, 100, 100, 87};
    int item_idx = minsearch(array, sizeof(array) / sizeof(array[0]));
    if (item_idx > -1) // <= , return 
    {
        int item = array[item_idx];
        printf("min item: %d\n", item);
    }
    else
    {
        printf("error");
    }
}


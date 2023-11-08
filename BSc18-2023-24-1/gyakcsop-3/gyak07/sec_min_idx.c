

#include <stdio.h>

int minsearch(int data[], int size)
{
    if (size < 2)
    {
        return -1;
    }
    int min_idx = 0;
    int sec_min_idx = 0;
    if (data[0] > data[1])
    {
        min_idx = 1;
        sec_min_idx = 0;
    }
    else
    {
        min_idx = 0;
        sec_min_idx = 1;
    }
    for (int i = 2; i < size; ++i)
    {
        if (data[i] < data[sec_min_idx])
        {
            if (data[i] < data[min_idx])
            {
                sec_min_idx = min_idx;
                min_idx = i;
            }
            else
            {
                sec_min_idx = i;
            }
        }
    }
    return sec_min_idx;
}

int main()
{
    int array[] = {4, -7, -50, -100, 87};
    int item_idx = minsearch(array, sizeof(array) / sizeof(array[0]));
    if (item_idx > -1) // <= , return 
    {
        int item = array[item_idx];
        printf("sec_min item: %d\n", item);
    }
    else
    {
        printf("error");
    }
}


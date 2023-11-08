#include <stdio.h>
#include <limits.h>

int minsearch(int data[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; ++i)
    {
        if (data[i] < min)
        {
            min = data[i];
        }
    }
    return min;
}


int main()
{
    int array[] = {4, -7, -50, -100, 87};
    int item = minsearch(array, sizeof(array) / sizeof(array[0]));
    if (item == INT_MAX)
    {
        printf("error");
        return 1;
    }
    printf("item: %d\n", item);
    return 0;
}

#include <stdio.h>

void foo(int array[], int size, int* ppos, int* pneg, int* pzero)
{
    for (int i = 0; i < size; ++i)
    {
        printf("array[i] = %d\n", array[i]);
        if (array[i] == 0)
        {
            *pzero = *pzero + 1;
            //(*zero)++;
        }
        else if (array[i] < 0)
        {
            (*pneg)++;
        }
        else
        {
            (*ppos)++;
        }
    }


    array[0] = 100;
}

int main()
{
    int pos = 0;
    int neg = 0;
    int zero = 0;

    int array[] = {4, 0, 5, 10, -1, -4, 0, 56};
    foo(array, 8, &pos, &neg, &zero); // foo(array, sizeof(array)/sizeof(array[0]))

    printf("array[0] = %d\n", array[0]);
    // int x;
    // &x    ---  int* ami az x memóriacímét tartalmazza


    printf("pos = %d\n", pos);
    printf("neg = %d\n", neg);
    printf("zero = %d\n", zero);
}



/*
https://github.com/richard-koch-gomori/teaching-elte-ik-Imperative-programming/blob/master/BSc18-2018-19-1/mintavizsga-feladatsorok/feladatsorok.txt#L253

RÉGI ZH-K, A MOSTANIAK ENNÉL NEHEZEBBEK
*/

#include <stdio.h>

int logsearch(int array[], int size, int item)
{
    int lo = 0;
    int hi = size - 1;
    
    while (lo <= hi)
    {
        const int middle = (lo + hi)/2;
        //printf("DEBUG 0 : middle = %d\n", middle);
        if (array[middle] == item)
        {
            return middle;
        }
        else if (array[middle] < item)
        {
            //printf("DEBUG 1 middle = %d\n", middle);
            lo = middle + 1;
        }
        else
        {
            //printf("DEBUG 2 middle = %d\n", middle);
            hi = middle - 1;
        }
    }
    return -1;
}

/*
7 hosszú, (0 + 6)/2 = 3, array[3] < 15

lo = 0
hi = 6


lo = 3 + 1 = 4
hi = 6

3 hosszú, (4 + 6)/2 = 1, array[1] == 15

0   1  2  3  4   5   6
-2, 0, 5, 7, 11, 15, 23

*/

int main()
{
    int array[] = {-2, 0, 5, 7, 11, 15, 23};
    int idx = logsearch(array, 7, 15);
    printf("idx = %d\n", idx);
    idx = logsearch(array, 7, 16);
    printf("idx = %d\n", idx);
    idx = logsearch(array, 7, 0);
    printf("idx = %d\n", idx);
}


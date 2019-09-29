

#include <stdio.h>

/*void foo(int a[], int size)
{
    // a param�terek (a, size) val�j�ban lok�lis v�ltoz�k
    // �gy szerepelhetnek az �rt�kad�s bal oldal�n

    // pl size = 11; lefordulna �s size �rt�ke itt 11, viszont a main()
    // f�ggv�nyben szerepl� size v�ltoz� �rt�ke v�ltozatlan a f�ggv�nyh�v�s ut�n

    // ez nem vonatkozik t�mb�kre, p�ld�ul
    a[0] = 10;
    // hat�s�ra a h�v�skor �tadott t�mb 0. eleme megv�ltozik 10-re
}*/

void double_array(int a[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        a[idx] = 2 * a[idx];
    }
}

void print_elements(int arr[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        printf("%i\n", arr[idx]);
    }
}

int main()
{
    int x[] = {1, 2, 3};
    int size = 3;
    print_elements(x, size);
    double_array(x, size);
    print_elements(x, size);
    printf("size = %i\n", size);
    return 0;
}

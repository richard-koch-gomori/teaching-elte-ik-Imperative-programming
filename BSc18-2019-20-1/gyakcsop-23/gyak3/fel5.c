

#include <stdio.h>

/*void foo(int a[], int size)
{
    // a paraméterek (a, size) valójában lokális változók
    // így szerepelhetnek az értékadás bal oldalán

    // pl size = 11; lefordulna és size értéke itt 11, viszont a main()
    // függvényben szereplõ size változó értéke változatlan a függvényhívás után

    // ez nem vonatkozik tömbökre, például
    a[0] = 10;
    // hatására a híváskor átadott tömb 0. eleme megváltozik 10-re
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

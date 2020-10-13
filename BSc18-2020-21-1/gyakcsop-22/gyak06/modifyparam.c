


#include <stdio.h>


void foo(int* p)
{
    *p = 20;
}


int main()
{
    int i = 5;
    foo(&i);

    //int* p;
    //p = &i;
    //*p = 20;

    printf("i = %i\n", i); // 20

    return 0;
}



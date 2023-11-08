#include <stdio.h>

void foo(int* x)
{
    *x = 10;
}

int main()
{
    // 1
    int var = 1;

    // &var : mutatógenerálás, var-ra mutatü pointert ad vissza
    int* ptr = &var;

    printf("the current value of var: %d\n", var);
    // *ptr : dereferálás, a ptr által mutatott memóriaterületet érjük el
    *ptr = 2;
    printf("the current value of var: %d\n", var);

    foo(&var);
    printf("the current value of var: %d\n", var);

    int** ptr_to_ptr = &ptr;
    **ptr_to_ptr = 20;
    printf("the current value of var: %d\n", var);

    printf("sizeof int: %llu\n", sizeof(int));
    printf("sizeof int*: %llu\n", sizeof(int*));
    printf("sizeof int**: %llu\n", sizeof(int**));
}

// memóriatérkép (*ptr = 2; utasításig)
/*
tizenhatos számrendszerben 0xfa100
átváltása kettes számrendszerbe: 00000000 00001111 10100001 00000000

stack:
var 0xfa100: 00000000 00000000 00000000 00000001
ptr 0xfb400: 00000000 00001111 10100001 00000000

*ptr = 2; után

var 0xfa100: 00000000 00000000 00000000 00000010
ptr 0xfb400: 00000000 00001111 10100001 00000000 = 0xfa100
*/


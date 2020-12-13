// fel2

#include <stdio.h>

#include "func.h"


int main()
{
    init();

    printf("printout 1:\n");
    PrintAllItems();

    add(2);
    add(4);
    add(1);

    printf("printout 2:\n");
    PrintAllItems();

    add(12);
    add(4);
    add(4);
    add(-2);
    add(325);

    printf("printout 3:\n");
    PrintAllItems();

    return 0;
}


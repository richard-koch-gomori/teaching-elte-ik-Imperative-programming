// fel3

#include <stdio.h>

#include "func.h"


// 1 pont: main �talak�t�sa helyes, van finalize() h�v�s

int main()
{
    // 1 pont: p�ld�nyos�t lok�lis v�ltoz�val
    Bag bag1;

    init(&bag1, 10);

    printf("printout 1:\n");
    PrintAllItems(bag1);

    add(&bag1, 2);
    add(&bag1, 4);
    add(&bag1, 1);

    printf("printout 2:\n");
    PrintAllItems(bag1);

    add(&bag1, 12);
    add(&bag1, 4);
    add(&bag1, 4);
    add(&bag1, -2);
    add(&bag1, 325);

    printf("printout 3:\n");
    PrintAllItems(bag1);

    finalize(&bag1);

    return 0;
}


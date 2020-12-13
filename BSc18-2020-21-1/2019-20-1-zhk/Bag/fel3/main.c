// fel3

#include <stdio.h>

#include "func.h"


// 1 pont: main átalakítása helyes, van finalize() hívás

int main()
{
    // 1 pont: példányosít lokális változóval
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


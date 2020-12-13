// fel1

#include <stdio.h>


// 1 pont: vmi értelmes MAX_SIZE
#define MAX_SIZE 100


// 1 pont
typedef struct item_t
{
    int item;
    unsigned int mult;
} item_t;


// 1 pont
item_t data[MAX_SIZE];
unsigned int current_size;


// 1 pont
void init(void)
{
    current_size = 0;
}

// 1 pont: szignatúra
int add(int newitem)
{
    if (current_size >= MAX_SIZE) // 1 pont
    {
        return 1;
    }
    for (unsigned int idx = 0; idx < current_size; ++idx) // 1 pont
    {
        if (data[idx].item == newitem)// 1 pont
        {
            ++data[idx].mult; // 1 pont
            return 0;
        }
    }
    // 1 pont
    data[current_size].item = newitem;
    data[current_size].mult = 1;
    ++current_size;
    return 0;
}

// 1 pont: szignatúra
void PrintAllItems(void)
{
    for (unsigned int idx = 0; idx < current_size; ++idx)
    {
        printf("(%i, %i) \n", data[idx].item, data[idx].mult); // 1 pont
    }
}

// 1 pont
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


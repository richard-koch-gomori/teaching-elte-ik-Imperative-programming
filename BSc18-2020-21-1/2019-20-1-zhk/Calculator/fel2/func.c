// fel2


#include "func.h"


// 1 pont: static
static unsigned int memory;
static unsigned int input = 0;
static unsigned int state = LEFT;


// 1 pont: függvények impl-je .c fájlban
unsigned int digit(unsigned int n)
{
    input = 10*input + n;
    if (state == LEFT_PLUS)
    {
        state = PLUS_RIGHT;
    }
    else if (state == LEFT_TIMES)
    {
        state = TIMES_RIGHT;
    }
    return input; // 1 pont: return-ok
}

static void helper(int newstate)
{
    switch (state)
    {
        case LEFT:
        {
            memory = input;
            break;
        }
        case PLUS_RIGHT:
        {
            memory += input;
            break;
        }
        case TIMES_RIGHT:
        {
            memory *= input;
            break;
        }
    }
    input = 0;
    state = newstate;
}

unsigned int plus()
{
    helper(LEFT_PLUS);
    return memory;
}

unsigned int times()
{
    helper(LEFT_TIMES);
    return memory;
}

unsigned int reset()
{
    memory = 0;
    input = 0;
    state = LEFT;
    return input;
}



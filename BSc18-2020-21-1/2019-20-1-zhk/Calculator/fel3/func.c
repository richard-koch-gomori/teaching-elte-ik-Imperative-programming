// fel3


#include "func.h"


// 2 pont: pointer mindenhol
unsigned int digit(calculator* calc, unsigned int n)
{
    calc->input = 10*calc->input + n; // 2 pont: mezőhivatkozás mindenhol
    if (calc->state == LEFT_PLUS)
    {
        calc->state = PLUS_RIGHT;
    }
    else if (calc->state == LEFT_TIMES)
    {
        calc->state = TIMES_RIGHT;
    }
    return calc->input;
}

static void helper(calculator* calc, int newstate)
{
    switch (calc->state)
    {
        case LEFT:
        {
            calc->memory = calc->input;
            break;
        }
        case PLUS_RIGHT:
        {
            calc->memory += calc->input;
            break;
        }
        case TIMES_RIGHT:
        {
            calc->memory *= calc->input;
            break;
        }
    }
    calc->input = 0;
    calc->state = newstate;
}

unsigned int plus(calculator* calc)
{
    helper(calc, LEFT_PLUS);
    return calc->memory;
}

unsigned int times(calculator* calc)
{
    helper(calc, LEFT_TIMES);
    return calc->memory;
}

unsigned int reset(calculator* calc)
{
    calc->memory = 0;
    calc->input = 0;
    calc->state = LEFT;
    return calc->input;
}



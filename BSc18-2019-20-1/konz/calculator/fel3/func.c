

#include "func.h"


unsigned int digit(calculator* c, unsigned int n)
{
    c->input = 10*c->input + n;
    if (c->state == LEFT_PLUS)
    {
        c->state = PLUS_RIGHT;
    }
    else
    {
        if (c->state == LEFT_TIMES)
        {
            c->state = TIMES_RIGHT;
        }
    }
    return c->input;
}

void helper(calculator* c, int newstate)
{
    switch (c->state)
    {
        case LEFT:
        {
            c->memory = c->input;
            break;
        }
        case PLUS_RIGHT:
        {
            c->memory = c->memory + c->input;
            break;
        }
        case TIMES_RIGHT:
        {
            c->memory = c->memory * c->input;
            break;
        }
    }
    c->input = 0;
    c->state = newstate;
}

unsigned int plus(calculator* c)
{
    helper(c, LEFT_PLUS);
    return c->memory;
}

unsigned int times(calculator* c)
{
    helper(c, LEFT_TIMES);
    return c->memory;
}

unsigned int reset(calculator* c)
{
    c->memory = 0;
    c->input = 0;
    c->state = LEFT;
    return c->input;
}



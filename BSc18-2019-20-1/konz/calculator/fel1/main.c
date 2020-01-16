

#include <stdio.h>


typedef enum STATE
{
    LEFT,
    LEFT_PLUS,
    LEFT_TIMES,
    PLUS_RIGHT,
    TIMES_RIGHT
} STATE;

STATE state;
unsigned int memory, input;


void digit(unsigned int n)
{
    input = 10*input + n;
    if (state == LEFT_PLUS)
    {
        state = PLUS_RIGHT;
    }
    else
    {
        if (state == LEFT_TIMES)
        {
            state = TIMES_RIGHT;
        }
    }
}

void helper(int newstate)
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
            memory = memory + input;
            break;
        }
        case TIMES_RIGHT:
        {
            memory = memory * input;
            break;
        }
    }
    input = 0;
    state = newstate;
}

void plus()
{
    helper(LEFT_PLUS);
}

void times()
{
    helper(LEFT_TIMES);
}

void reset()
{
    memory = 0;
    input = 0;
    state = LEFT;
}

int main()
{
    reset();

    digit(2);
    plus();
    digit(4);
    plus();

    printf("memory = %i, input = %i\n", memory, input);

    return 0;
}



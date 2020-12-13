// fel1


#include <stdio.h>


// 1 pont
enum STATE
{
    LEFT = 1,
    LEFT_PLUS = 2,
    LEFT_TIMES = 3,
    PLUS_RIGHT = 4,
    TIMES_RIGHT = 5
};

// 1 pont
static unsigned int memory;
static unsigned int input = 0;
static unsigned int state = LEFT;


// 1 pont: fv szignatúrák
void digit(unsigned int n)
{
    input = 10*input + n; // 1 pont
    if (state == LEFT_PLUS) // 1 pont
    {
        state = PLUS_RIGHT;
    }
    else if (state == LEFT_TIMES) // 1 pont
    {
        state = TIMES_RIGHT;
    }
}

void helper(int newstate)
{
    switch (state)
    {
        case LEFT: // 1 pont
        {
            memory = input;
            break;
        }
        case PLUS_RIGHT: // 1 pont
        {
            memory += input;
            break;
        }
        case TIMES_RIGHT: // 1 pont
        {
            memory *= input;
            break;
        }
    }
    // 1 pont
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

// 1 pont
void reset()
{
    memory = 0;
    input = 0;
    state = LEFT;
}


// 1 pont
int main()
{
    reset();

    digit(5);
    digit(1);
    plus();
    digit(5);
    times();
    digit(2);
    plus();

    printf("memory = %i\ninput = %i\n", memory, input);
    return 0;
}




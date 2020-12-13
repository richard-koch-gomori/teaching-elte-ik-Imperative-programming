// fel3


#if !defined FUNC_INCLUDED

#define FUNC_INCLUDED


enum STATE
{
    LEFT = 1,
    LEFT_PLUS = 2,
    LEFT_TIMES = 3,
    PLUS_RIGHT = 4,
    TIMES_RIGHT = 5
};


// 1 pont
typedef struct calculator
{
    unsigned int memory;
    unsigned int input;
    unsigned int state;
} calculator;


extern unsigned int digit(calculator* calc, unsigned int n);
extern unsigned int plus(calculator* calc);
extern unsigned int times(calculator* calc);
extern unsigned int reset(calculator* calc);


#endif


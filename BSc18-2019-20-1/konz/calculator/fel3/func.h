
#if !defined FUNC_INCLUDED

#define FUNC_INCLUDED


typedef enum STATE
{
    LEFT,
    LEFT_PLUS,
    LEFT_TIMES,
    PLUS_RIGHT,
    TIMES_RIGHT
} STATE;


typedef struct calculator
{
    STATE state;
    unsigned int memory, input;
} calculator;


extern unsigned int digit(calculator* c, unsigned int n);
extern unsigned int plus(calculator* c);
extern unsigned int times(calculator* c);
extern unsigned int reset(calculator* c);


#endif



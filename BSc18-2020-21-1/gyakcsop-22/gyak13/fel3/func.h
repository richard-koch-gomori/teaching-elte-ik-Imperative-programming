

#if !defined FUNC_INCLUDED

#define FUNC_INCLUDED

//#ifndef FUNC_INCLUDED

#define MAX_ARRAY_SIZE 5

typedef struct ParityArray
{
    int data[MAX_ARRAY_SIZE];
    int even_idx;
    int odd_idx;
} ParityArray;

extern void InitParityArray(ParityArray* pa);
extern int InsertToParityArray(ParityArray* pa, int item);
extern void PrintParityArray(ParityArray* pa);

#endif


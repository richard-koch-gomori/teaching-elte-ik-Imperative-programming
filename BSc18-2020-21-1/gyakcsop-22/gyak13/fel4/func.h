

#if !defined FUNC_INCLUDED

#define FUNC_INCLUDED

//#ifndef FUNC_INCLUDED

#define MAX_ARRAY_SIZE 5

typedef struct ParityArray
{
    int* data;
    int even_idx;
    int odd_idx;
    unsigned int size;
} ParityArray;

extern int InitParityArray(ParityArray* pa, unsigned int size);
extern int InsertToParityArray(ParityArray* pa, int item);
extern void PrintParityArray(ParityArray* pa);
extern void DisposeParityArray(ParityArray* pa);

#endif


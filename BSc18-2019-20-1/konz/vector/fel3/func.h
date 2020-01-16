

#if !defined FUNC_INCLUDED

#define FUNC_INCLUDED


#define TYPE int

typedef struct vector
{
    unsigned int cap, size;
    TYPE* ptr;
} vector;



extern int initialize(vector* v, int capacity);
extern void dispose(vector* v);
extern int append(vector* v, TYPE e);
extern TYPE retrieve(vector* v, int i);


#endif


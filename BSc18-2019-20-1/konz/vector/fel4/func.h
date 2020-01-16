

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

extern int insert(vector* v, int i, TYPE e);
extern int erase(vector* v, int i);
extern void PrintVector(vector* v);

extern int set_capacity(vector* v, int c);
extern int safe_append(vector* v, TYPE e);
extern int safe_insert(vector* v, int i, TYPE e);


#endif


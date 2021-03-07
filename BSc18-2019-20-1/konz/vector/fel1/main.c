

#include <stdio.h>
#include <stdlib.h>


#define TYPE int

typedef struct vector
{
    unsigned int cap, size;
    TYPE* ptr;
} vector;


int initialize(vector* v, int capacity)
{
    if (capacity <= 0)
    {
        return 1;
    }
    v->cap = capacity;
    v->size = 0;
    v->ptr = malloc(capacity * sizeof(TYPE));
    if (v->ptr == NULL)
    {
        return 1;
    }
    return 0;
}

void dispose(vector* v)
{
    free(v->ptr);
    v->cap = 0;
    v->size = 0;
}

int append(vector* v, TYPE e)
{
    if (v->size < v->cap)
    {
        v->ptr[v->size] = e;
        v->size++;
        return 0;
    }
    return 1;
}

TYPE retrieve(vector* v, int i)
{
    return v->ptr[i];
}

int main()
{
    vector v;
    if (initialize(&v, 10) != 0)
    {
        printf("jajj hiba volt\n");
        return 1;
    }
    append(&v, -3);
    append(&v, -5);
    append(&v, 10);
    printf("%i\n", retrieve(&v, 2));
    dispose(&v);
}

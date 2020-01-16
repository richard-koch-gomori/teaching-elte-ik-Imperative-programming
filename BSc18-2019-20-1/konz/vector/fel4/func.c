// 4-5. feladat


#include <stdio.h>
#include <stdlib.h>

#include "func.h"


int initialize(vector* v, int capacity)
{
    if (capacity <= 0)
    {
        return 1;
    }
    v->cap = capacity; // (*v).cap = capacity;
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

int insert(vector* v, int i, TYPE e)
{
    if (v->size < v->cap && i <= v->size)
    {
        if (i != v->size)
        {
            for (int j = v->size; i < j; --j)
            {
                v->ptr[j] = v->ptr[j - 1];
            }
        }
        v->size++;
        v->ptr[i] = e;
        return 0;
    }
    else
    {
        return 1;
    }
}

int erase(vector* v, int i)
{
    if (i < v->size)
    {
        if (i != v->size)
        {
            for (int j = i; j < v->size - 1; ++j)
            {
                v->ptr[j] = v->ptr[j + 1];
            }
        }
        v->size--;
        return 0;
    }
    else
    {
        return 1;
    }
}

void PrintVector(vector* v)
{
    for (int i = 0; i < v->size; ++i)
    {
        printf("%i ", v->ptr[i]);
    }
    printf("\n");
}

static void move(TYPE* dest, TYPE* src, int size)
{
    for (int i = 0; i < size; ++i)
    {
        dest[i] = src[i];
    }
}

int set_capacity(vector* v, int c)
{
    if (c >= v->size)
    {
        TYPE* new_ptr = malloc(c * sizeof(TYPE));
        if (new_ptr == NULL)
        {
            return 1;
        }
        move(new_ptr, v->ptr, v->size);
        free(v->ptr);
        v->ptr = new_ptr;
        v->cap = c;
        return 0;
    }
    else
    {
        return 1;
    }
}

int safe_append(vector* v, TYPE e)
{
    if (append(v, e) != 0)
    {
        if (set_capacity(v, 2*v->cap) == 0)
        {
            return append(v, e);
        }
        return 1;
    }
    return 0;
}

int safe_insert(vector* v, int i, TYPE e)
{
    if (insert(v, i, e) != 0)
    {
        if (set_capacity(v, 2*v->cap) == 0)
        {
            return insert(v, i, e);
        }
        return 1;
    }
    return 0;
}

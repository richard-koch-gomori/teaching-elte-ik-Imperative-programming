// fel2

// 1 pont: header guard
#if !defined FUNC_INCLUDED

#define FUNC_INCLUDED


// 1 pont: MAX_SIZE �s item_t �thelyez�se header-be
#define MAX_SIZE 100

typedef struct item_t
{
    int item;
    unsigned int mult;
} item_t;

// 1 pont: szignat�r�k
extern void init(void);
extern int add(int newitem);
extern void PrintAllItems(void);


#endif


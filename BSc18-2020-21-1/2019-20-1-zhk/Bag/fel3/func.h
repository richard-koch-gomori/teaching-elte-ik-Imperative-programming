// fel3

#if !defined FUNC_INCLUDED

#define FUNC_INCLUDED


typedef struct item_t
{
    int item;
    unsigned int mult;
} item_t;

// 1 pont
typedef struct Bag
{
    unsigned int current_size;
    unsigned int max_size;
    item_t* data;
} Bag;

extern int init(Bag* bag, unsigned int max_size);
extern int add(Bag* bag, int newitem);
extern void PrintAllItems(Bag bag);
extern void finalize(Bag* bag);


#endif


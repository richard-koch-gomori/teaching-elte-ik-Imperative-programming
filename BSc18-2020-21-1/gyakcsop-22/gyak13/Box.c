/*
Feladat:

1. Valósítsunk meg egy olyan verem adatszerkezetet, amiben "dobozokat fogunk tudni egymásra pakolni".
Ehhez hozzunk létre egy Box nevű struktúrát, ami rendelkezik egy egész szám típusú súly értékkel (weight)
és egy Box struktúrára mutató pointerrel (next).

2. Hozzunk létre egy globális pointer változót a Box struktúrából (top). Írjuk meg az initialize függvényt,
amely NULL-ra állítja a top változót. A main függvényben hívjuk meg az initialize-t!

3. Írjuk meg az isEmpty függvényt, amely visszaadja, hogy üres-e a stack vagy sem. (A stack akkor üres, ha
a top változó NULL pointer.)

4. Írjuk meg a peek függvényt, ami a jelenlegi legfelső Box súlyával tér vissza. (Ne feledkezzünk meg arról
az esetről, amikor a stack üres!)

5. Írjuk meg a Push függvényt, ami egy egész számot kap paraméterül, ez lesz a következő doboz súlya.
Hozzunk létre egy új elemet a stacken, és állítsuk be a súlyát. Az új elem next adattagja az előző adattagra mutasson! A top változó mutasson az új elemre.

6. Írjuk meg a Pop függvényt, ami felszabadítja a verem tetején lévő elemet, és a top változót az eggyel
alatta lévőre állítja. (Ne feledkezzünk meg az üres stack lehetőségéről sem!)

7. Írjuk meg a copyTop függvényt, amely lemásolja a verem legfelső elemét, és a verem tetejére helyezi
a másolatot. Nézzük meg, mi történik, ha csak a legfelső elemre mutató pointert másoljuk le, illetve ha
új memóriaterületet allokálunk a másolatnak, és adattagonkénti másolást végzünk!
*/


#include <stdio.h>
#include <stdlib.h>


typedef struct Box
{
    int weight;
    struct Box* next;
} Box;

Box* top;


void initialize()
{
    top = NULL;
}

int isEmpty()
{
    return top == NULL;
}

int peek()
{
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        return top->weight;
    }
}

void push(int next_box_weight)
{
    Box* next_box = malloc(sizeof(Box));
    next_box->weight = next_box_weight;
    next_box->next = top;
    top = next_box;
}

void print()
{
    Box* tmp = top;
    while (tmp != NULL)
    {
        printf("%i, ", tmp->weight);
        tmp = tmp->next;
    }
    printf("\n");
}

void pop()
{
    if (!isEmpty())
    {
        Box* tmp = top->next;
        free(top);
        top = tmp;
    }
}

// helytelen megoldás: nem elég csak a pointer-t másolni
/*
void copyTo()
{
    Box* tmp = top;
    tmp->weight = top->weight;
    tmp->next = top;
    top = tmp;
}
*/

void copyTo()
{
    Box* tmp = malloc(sizeof(Box));
    tmp->weight = top->weight;
    tmp->next = top;
    top = tmp;
}


int main()
{
    initialize();
    push(5);
    push(7);
    push(10);
    push(2);
    print();

    printf("----------------------------\n");
    pop();
    print();

    printf("----------------------------\n");
    copyTo();
    print();

    return 0;
}




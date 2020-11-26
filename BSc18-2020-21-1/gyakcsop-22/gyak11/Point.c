/*
Feladat:
Készítsen kétdimenziós pont saját típust. Írjon függvényt, amely
kétdimenzós pontok síkbeli távolságát számolja ki.
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>


struct Point_t
{
    int x; // x és y a Point struct mezői
    int y;
};

// typedef típusleírás azon
// a [típusleírás] típushoz azon néven bevezet egy szinonim nevet
// struct: összetett típus, több típusú adatból álló típus
typedef struct Point_t Point;

double distance(Point p1, Point p2) // x1, y1, x2, y2
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


int main()
{
    //Point p = {.x = 2, .y = 1};
    //p.x = 2; // mezők értékadása
    //p.y = 1;

    // struct inicializálása
    //Point pp = {.x = 3, .y = 2};
    //pp.x = 3;
    //pp.y = 2;

    Point* p = malloc(sizeof(Point));
    (*p).x = 2;
    (*p).y = 3;

    //if (p == NULL)
    Point* pp = malloc(sizeof(Point));
    pp->x = 12;
    pp->y = 23;

    free(p);
    free(pp);

    printf("%lf\n", distance(*p, *pp));
    return 0;
}


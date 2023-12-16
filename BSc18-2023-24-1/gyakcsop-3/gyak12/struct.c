#include <stdio.h>
#include <math.h>

/*
double distance(int x1, int y1, int z1, int x2, int y2, int z2)
{
    return ....
}
*/

struct Point
{
    int x;
    int y;
    int z;
};

typedef struct Point Point_t;

// struct-al:
double distance(struct Point p1, struct Point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + 
        pow(p1.y - p2.y, 2) + 
        pow(p1.z - p2.z, 2));
}



int main()
{
    struct Point p1;
    p1.x = 1;
    p1.y = -10;
    p1.z = 55;

    struct Point p2 = {.x = 22, .y = 76, .z = 89};

    //Point_t p = ..

    printf("distance: %lf\n", distance(p1, p2));
}


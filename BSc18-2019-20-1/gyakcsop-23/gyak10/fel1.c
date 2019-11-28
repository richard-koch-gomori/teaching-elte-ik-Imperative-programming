

#include <stdio.h>
#include <math.h>


// typedef t�pusle�r�s azon
// a [t�pusle�r�s] t�pushoz azon n�ven bevezet egy szinonim nevet
// struct: �sszetett t�pus, t�bb t�pus� adatb�l �ll� t�pus
typedef struct Point
{
    double x; // x �s y a Point struct mez�i
    double y;
} point_t;


double distance(point_t p1, point_t p2)
{
    // mez�hivatkoz�s: v�ltoz�n�v.mez�n�v form�ban
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


int main()
{
    /*
    point_t p1, p2;
    p1.x = 4; // mez�k �rt�kad�sa
    p1.y = -5;
    p2.x = 4;
    p2.y = 8;
    printf("%lf\n", distance(p1, p2));*/

    // struct inicializ�l�sa
    point_t p1 = {.x = 4, .y = -5}, p2 = {.x = 4, .y = 8};
    printf("%lf\n", distance(p1, p2));
}


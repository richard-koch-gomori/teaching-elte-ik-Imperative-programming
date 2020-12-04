/*
Feladat:

1. Hozzunk létre egy új típust `Student` néven, mellyel hallgatókat fogunk reprezentálni. Tartalmazzon azonosítót, átlagot és kort. Az átlag típusa legyen kétszeresen pontos lebegőpontos szám, a többi egész szám.
  Vizsgáljuk meg a memóriaszükségletét a típusnak, kísérletezzünk az adattagok sorrendjével és figyeljük meg ennek hatását."
2. A praktikusság jegyében hozzunk létre egy alias típust typedef-fel, hogy a típust tudjuk a struct előtag nélkül is használni.
3. Hozzunk létre egy függvényt mely egy `Student` tömböt kap és visszaadja a legmagasabb átlagú hallgatónak az azonosítóját.
4. Kezeljük külön a BSc-s, MSc-s és PhD-s hallgatókat, erre hozzunk létre egy felsoroló típust (enum) `Type` néven és adjuk hozzá a Student-hez adattagként.
*/


#include <stdio.h>

/*
float - egyszeres
double - kétszeres
long double
*/

/*
enum Colors { white, yellow = 3, red, blue, black };

int main()
{
    enum Colors c = red;
    printf("%i\n", c);
}
*/

enum Type {BSc, MSc, PhD};

struct Student_t
{
    int id;
    double avg;
    int age;
    enum Type type;
};

typedef struct Student_t Student;


int max_avg(Student a[], int size)
{
    int max_idx = 0;
    for (int i = 0; i < size; ++i)
    {
        if (a[i].avg > a[max_idx].avg)
        {
            max_idx = i;
        }
    }
    return a[max_idx].id;
}


int main()
{
    Student arr[3];

    arr[0].id = 1;
    arr[0].avg = 4.32;
    arr[0].age = 22;
    arr[0].type = MSc;

    arr[1].id = 4;
    arr[1].avg = 4.55;
    arr[1].age = 23;
    arr[1].type = BSc;

    arr[2].id = 5;
    arr[2].avg = 2;
    arr[2].age = 24;
    arr[2].type = BSc;

    printf("Legnagyobb atlagu hallgato azon: %i\n", max_avg(arr, 3));
    return 0;
}



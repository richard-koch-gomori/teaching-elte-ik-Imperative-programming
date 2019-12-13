

#include <stdio.h>

#include "orderednums.h"


int main()
{
    int result = orderednums_Initialize();
    if (result)
    {
        return 1;
    }

    orderednums_AddNumber(4);
    orderednums_PrintAll();
    orderednums_AddNumber(3);
    orderednums_PrintAll();
    orderednums_AddNumber(6);
    orderednums_PrintAll();
    orderednums_AddNumber(-1);
    orderednums_AddNumber(100);
    orderednums_PrintAll();
    orderednums_AddNumber(-1);
    orderednums_AddNumber(-1);
    orderednums_AddNumber(4);
    orderednums_AddNumber(-1);
    // a felhaszn�l� el tudja rontani, mert orderednums_CurrentSize
    // kil�tszik (hozz�f�rhet�) a gener�lt bin�risb�l
    //extern int orderednums_CurrentSize;
    //orderednums_CurrentSize = 0;
    orderednums_AddNumber(-1);
    orderednums_PrintAll();
    orderednums_AddNumber(16);
    orderednums_AddNumber(44);
    orderednums_AddNumber(76);
    orderednums_AddNumber(75);
    orderednums_PrintAll();
    orderednums_AddNumber(-75000000);
    orderednums_PrintAll();

    printf("orderednums_IsContained(77) = %i\n", orderednums_IsContained(77));
    orderednums_AddNumber(77);
    printf("orderednums_IsContained(77) = %i\n", orderednums_IsContained(77));

    return 0;
}


// Bíró László Dénes megoldása

#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    double weights[] = {1.0, 1.0, 2.0, 3.0, 5.0};

    int size = sizeof(array) / sizeof(array[0]);

    double sum = 0.0;

    for (int i = 0; i < size; i++)
    {
        sum += array[i] * weights[i];
    }

    double total_weight = 0.0;
    for (int i = 0; i < size; i++)
    {
        total_weight += weights[i];
    }

    double average = sum / total_weight;

    printf("Az átlag: %lf\n", average);

    return 0;
}






#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    double* ptr = (double*)malloc(num * sizeof(double));

    for (int i = 0; i < num; ++i)
    {
        printf("Enter a double: ");
        //scanf("%lf", &ptr[i] ); // ptr[i] == *(ptr + i)
        scanf("%lf", ptr + i );
    }

    double sum = 0;
    for (int i = 0; i < num; ++i)
    {
        sum += *(ptr + i);
        //sum += ptr[i];
    }
    printf("avg = %lf\n", sum / num);

    free(ptr);

    return 0;
}

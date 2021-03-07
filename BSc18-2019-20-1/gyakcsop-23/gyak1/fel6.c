

#include <stdio.h>


int main()
{
    int n;
    printf("n: ");
    scanf("%i", &n);

    for (int idx = 1; idx <= n; idx = idx + 1)
    {
        //for (int idx2 = 0; idx2 < idx; idx2 = idx2 + 1)
        for (int idx2 = 1; idx2 <= idx; idx2 = idx2 + 1)
        {
            printf("%i", idx);
        }
        printf("\n");
    }
}


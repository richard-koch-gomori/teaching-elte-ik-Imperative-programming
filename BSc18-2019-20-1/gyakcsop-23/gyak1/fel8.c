

#include <stdio.h>



int main()
{
    int a = 77;
    int b = 77;
    for (int idx = a; idx <= b; idx = idx + 1)
    {
        if (idx % 7 == 0 || idx % 11 == 0) // a % b eredményül adja az a/b osztás maradékát
        // || logikai vagy: akkor igaz, ha valamilyeik részkifejezés igaz
        {
            printf("%i", idx);
        }
    }
    return 0;
}


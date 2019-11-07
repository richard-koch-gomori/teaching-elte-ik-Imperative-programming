

#include <stdio.h>


// fv, sztringet fogad, és számolja meg, hány db
// 'a' ill. 'b' karakter van a sztringben


void foo(char str[], int* num_a, int* num_b)
{
    *num_a = 0;
    *num_b = 0;
    int idx = 0;
    while (str[idx] != '\0')
    {
        if (str[idx] == 'a')
        {
            *num_a += 1;
        }
        if (str[idx] == 'b')
        {
            *num_b += 1;
        }
        idx++;
    }
}


int main()
{
    int a, b;
    foo("alma", &a, &b); // 2, 0
    printf("%i, %i\n", a, b);
    foo("aaabfgtr", &a, &b); // 3, 1
    printf("%i, %i\n", a, b);
}

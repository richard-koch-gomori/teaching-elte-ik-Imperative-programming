
#include <stdio.h>

/*
void
a void nem típus, hanem egy kulcsszó, a típus hiányát jelöli
print_elements() olyan függvény, amely nem ad vissza értéket
*/

void print_elements(int arr[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        printf("%i\n", arr[idx]);
    }
}

int main()
{
    int numbers[] = {56, 78, 34, -56, 0, 1, -1, 54, 7, 89, -2, 100, 566, 321523, -3, 87, 0, 36, -1, -45, -25231285, 6, 14, -69, 123, 46747, 234, 7, -235, 346, 1325, -4436, 7457};
    print_elements(numbers, 33);
    //vagy: print_elements(numbers, sizeof(numbers) / sizeof(numbers[0]));
    return 0;
}


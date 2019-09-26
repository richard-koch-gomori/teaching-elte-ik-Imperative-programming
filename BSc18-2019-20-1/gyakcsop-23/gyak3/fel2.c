

#include <stdio.h>

/*void print_size(int numbers[])
{
    // ez így helytelen, ez a módszer paraméterként átvett tömbökre nem alkalmas
    // ha tömböt veszünk át paraméterként, át kell adni a tömb méretét is
    printf("%i\n", sizeof(numbers) / sizeof(numbers[0]));
}*/

//sizeof(obj) - visszadja az obj méretét bájtokban

int main()
{
    int numbers[] =
    {
        56, 78, 34, -56, 0, 1, -1, 54, 7, 89, -2, 100, 566, 321523, -3, 87, 0, 36, -1, -45, -25231285, 6, 14, -69, 123, 46747, 234, 7, -235, 346, 1325, -4436, 7457
    };
    printf("%i\n", sizeof(numbers) / sizeof(numbers[0]));
    //print_size(numbers);
    return 0;
}



#include <stdio.h>


int main()
{
    // i típusa átírható float-tá, ha lebegõpontos lépésközöket szeretnénk
    // (itt most erre nem volt igény)
    for (int i = -40; i <= 100; i = i + 20)
    {
        // az 5/9 egészosztás eredménye 0 (ami matematikailag korrekt)
        printf("%i    %f\n", i, 5.0/9.0 * (i - 32));
    }

    return 0;
}


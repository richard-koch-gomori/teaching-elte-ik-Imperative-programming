

#include <stdio.h>


int main()
{
    // 5 elem� t�mb, 5 db float adatot t�rolhatunk a t�mbben
    // a t�mb elemeire indexel�ssel [] hivatkozhatunk
    // valid indexek: 0, 1, ..., m�ret-1
    float a[5];
    for (int idx = 0; idx < 5; idx++) // for (int idx = 0; idx <= 4; idx++)
    {
        printf("�rjon be egy sz�mot: ");
        scanf("%f", &a[idx]);
    }
    printf("�tlag = %f\n", (a[0] + a[1] + a[2] + a[3] + a[4]) / 5.0);
    return 0;
}

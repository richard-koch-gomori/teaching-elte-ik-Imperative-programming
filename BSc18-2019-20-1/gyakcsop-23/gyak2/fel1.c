

#include <stdio.h>


int main()
{
    /*
    float a, b, c, d, e;
    printf("�rjon be egy sz�mot: ");
    scanf("%f", &a);
    printf("�rjon be egy sz�mot: ");
    scanf("%f", &b);
    printf("�rjon be egy sz�mot: ");
    scanf("%f", &c);
    printf("�rjon be egy sz�mot: ");
    scanf("%f", &d);
    printf("�rjon be egy sz�mot: ");
    scanf("%f", &e);

    printf("�tlag = %f\n", (a + b + c + d + e) / 5.0);
    */
    float val[5]; // 5-elem� t�mb
    // t�mb deklar�ci�: t�pus t�mbn�v[m�ret];
    // azonos t�pus� adatok egys�ge, az egyes adatokat indexel�ssel []
    // lehet el�rni
    // haszn�lhat� indexek: 0, 1, ..., m�ret-1

    /*printf("�rjon be egy sz�mot: ");
    scanf("%f", &val[0]);
    printf("�rjon be egy sz�mot: ");
    scanf("%f", &val[1]);
    printf("�rjon be egy sz�mot: ");
    scanf("%f", &val[2]);
    printf("�rjon be egy sz�mot: ");
    scanf("%f", &val[3]);
    printf("�rjon be egy sz�mot: ");
    scanf("%f", &val[4]);*/
    // ehelyett haszn�ljunk ciklust

    for (int i = 0; i < 5; i++) // i = 0, 1, 2, 3, 4
    {
        printf("�rjon be egy sz�mot: ");
        scanf("%f", &val[i]);
    }
    printf("�tlag = %f\n", (val[0] + val[1] + val[2] + val[3] + val[4] ) / 5.0);

    return 0;
}


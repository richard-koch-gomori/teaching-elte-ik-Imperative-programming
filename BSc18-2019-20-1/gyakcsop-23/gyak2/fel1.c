

#include <stdio.h>


int main()
{
    /*
    float a, b, c, d, e;
    printf("√çrjon be egy sz√°mot: ");
    scanf("%f", &a);
    printf("√çrjon be egy sz√°mot: ");
    scanf("%f", &b);
    printf("√çrjon be egy sz√°mot: ");
    scanf("%f", &c);
    printf("√çrjon be egy sz√°mot: ");
    scanf("%f", &d);
    printf("√çrjon be egy sz√°mot: ");
    scanf("%f", &e);

    printf("√Åtlag = %f\n", (a + b + c + d + e) / 5.0);
    */
    float val[5]; // 5-elem≈± t√∂mb
    // tˆmb deklar·ciÛ: tÌpus tˆmbnÈv[mÈret];
    // azonos tÌpus˙ adatok egysÈge, az egyes adatokat indexelÈssel []
    // lehet elÈrni
    // haszn·lhatÛ indexek: 0, 1, ..., mÈret-1

    /*printf("√çrjon be egy sz√°mot: ");
    scanf("%f", &val[0]);
    printf("√çrjon be egy sz√°mot: ");
    scanf("%f", &val[1]);
    printf("√çrjon be egy sz√°mot: ");
    scanf("%f", &val[2]);
    printf("√çrjon be egy sz√°mot: ");
    scanf("%f", &val[3]);
    printf("√çrjon be egy sz√°mot: ");
    scanf("%f", &val[4]);*/
    // ehelyett haszn·ljunk ciklust

    for (int i = 0; i < 5; i++) // i = 0, 1, 2, 3, 4
    {
        printf("√çrjon be egy sz√°mot: ");
        scanf("%f", &val[i]);
    }
    printf("√Åtlag = %f\n", (val[0] + val[1] + val[2] + val[3] + val[4] ) / 5.0);

    return 0;
}


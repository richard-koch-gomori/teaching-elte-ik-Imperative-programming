

#include <stdio.h>


int main()
{
    // i t�pusa �t�rhat� float-t�, ha lebeg�pontos l�p�sk�z�ket szeretn�nk
    // (itt most erre nem volt ig�ny)
    for (int i = -40; i <= 100; i = i + 20)
    {
        // az 5/9 eg�szoszt�s eredm�nye 0 (ami matematikailag korrekt)
        printf("%i    %f\n", i, 5.0/9.0 * (i - 32));
    }

    return 0;
}


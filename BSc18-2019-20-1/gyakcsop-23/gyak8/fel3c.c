

#include <stdio.h>
#include <stdlib.h>


// nagyon rossz megold�s
char* foo(int num, char ch)
{
    char arr[1000]; // az arr t�mb lok�lis, a f�ggv�ny blokkj�ba bel�pve j�n l�tre
    for (int i = 0; i < num; ++i)
    {
        arr[i] = ch;
    }
    arr[num] = '\0';

    //return arr;
    return &arr[0]; // kil�p�skor az arr t�mb "megsemmis�l":
    // lehet, hogy nem t�rl�dik, ez�rt n�ha j� eredm�nyt
    // kapunk, de a rendszer mindenk�ppen felszabad�tott t�rter�letk�nt
    // tartja sz�mon; a blokkon bel�l a mem�riac�me lek�rdezhet�, �s
    // azzal vissza lehet t�rni
    // �k�lszab�ly: lok�lisan l�trehozott v�ltoz�
    // pointer-�vel tilos visszat�rni
}


int main()
{
    char* ptr = foo(3, 'C');
    printf("%s\n", ptr);
    free(ptr);
}



#include <stdio.h>


int main()
{
    int x = 14;

    // pi egy int* t�pus� pointer, int t�pus� v�ltoz� mem�riac�m�t t�rolhatja
    int* pi;

    // &x: eredm�ny�l egy pointer-t ad, ami az x mem�riac�m�t tartalmazza
    pi = &x; // pi az x v�ltoz� mem�riac�m�t tartalmazza

    // *pi a pi �ltal mutatott ter�letet �rj�k el
    printf("*pi = %i\n", *pi);

    // a pointereket %p-vel ki�rva a pointerben t�rolt mem�riac�m �r�dik ki
    // (hexadecim�lis sz�mrendszerben)
    printf("x memoriacime: %p\n", &x);

    // mivel "pi az x-re mutat", a pi tartalma ugyanaz mint az el�z� printout-ban
    printf("pi = %p\n", pi);
}




#include <stdio.h>


int main()
{
    double d = 12.34;
    int i = 3;
    char c = 'A';

    double* pd;
    int* pi;
    char* pc;

    pd = &d;
    pi = &i;
    pc = &c;

    printf("d memoriacime: %p, d = %lf, d merete: %i\n", &d, d, sizeof(d));
    printf("i memoriacime: %p, i = %i, i merete: %i\n", &i, i, sizeof(i));
    printf("c memoriacime: %p, c = %c, c merete: %i\n", &c, c, sizeof(c));

    // adatra mutat� pointer-ek m�rete ugyanannyi, hiszen mem�riac�met t�rol
    // ami egy k�z�ns�ges eg�sz sz�m
    printf("pd memoriacime: %p, pd = %p, pd merete: %i\n", &pd, pd, sizeof(pd));
    printf("pi memoriacime: %p, pi = %p, pi merete: %i\n", &pi, pi, sizeof(pi));
    printf("pc memoriacime: %p, pc = %p, pc merete: %i\n", &pc, pc, sizeof(pc));

}


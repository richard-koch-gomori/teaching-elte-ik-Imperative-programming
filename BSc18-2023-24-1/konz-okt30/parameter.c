

#include <stdio.h>


// f�ggv�ny defin�ci�
void print(int parameter)
{
    // a param�ter az lok�lis m�solata az argumentumnak
    // (�rt�k szerinti param�ter�tad�s)
    printf("The current value of variable = %d\n", parameter);

    parameter = -100;
    printf("parameter = %d\n", parameter);
}

int add(int a, int b)
{
    return a + b; // visszat�r�s �rt�k
}


int main()
{
    int var = 6;
    print(var); // f�ggv�nyh�v�s, var: argumentum
    printf("%d\n", var);
    
    int x = 10;
    print(x); // argumentum: x
    
    int A = 21412;
    print(A); // argumentum: A




    int c = add(var, x);
    printf("c = %d\n", c);
}


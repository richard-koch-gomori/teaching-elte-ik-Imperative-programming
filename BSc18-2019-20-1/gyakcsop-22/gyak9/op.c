

#include <stdio.h>


int main()
{
    int i = 5;
    // kif1 ? kif2 : kif3
    // ha kif1 eredm�nye nemnulla (igaz), akkor a kifejez�s �rt�ke
    // kif2, m�sk�l�nben kif3
    printf("%s\n", (i % 2 == 0) ? "p�ros" : "p�ratlan");
}




#include <stdio.h>


int main()
{
    const int i = 27;
    // t�puselt�r�s: int-re mutat� pointerrel const int v�ltoz�ra mutatunk
    // C-ben lefordul, az i v�ltoz� �rt�ke megv�ltozik (C++-ban nem fordul)
    int* ptr = &i;
    *ptr = 80;
    printf("%i\n", i);
}




#include <stdio.h>
#include <string.h>


int main()
{
    char dest[256];
    // "alma (65, 78.2, citrom)"
    int i = 65;
    double d = 78.2;
    sprintf(dest, "%s (%i, %lf, %s)", "alma", i, d, "citrom");
    printf("%s\n", dest);
}

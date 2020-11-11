

#include <stdio.h>


int main()
{
    fputs("hello world", stdout);

    char line[256];
    fgets(line, sizeof(line), stdin);
    printf("%s\n", line);
    return 0;
}





#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING 10


int main(int argc, char* argv[])
{
    int count = atoi(argv[1]);
    char* ptr = malloc(count * sizeof(char) * MAX_STRING);
    for (int i = 0; i < count; ++i)
    {
        fgets(ptr + i*MAX_STRING, MAX_STRING, stdin);
    }
    for (int i = count-1; i >= 0; --i)
    {
        fputs(ptr + i*MAX_STRING, stdout);
    }
    return 0;
}


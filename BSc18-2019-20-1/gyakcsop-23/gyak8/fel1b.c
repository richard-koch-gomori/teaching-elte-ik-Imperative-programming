

#include <stdio.h>
#include <stdlib.h>


int main()
{
    void* pointer = malloc(100);
    int* pointer_to_int = (int*)pointer;
    *pointer_to_int = 12;
    char* pointer_to_char = (char*)pointer + sizeof(int);
    *pointer_to_char = 'A';
}


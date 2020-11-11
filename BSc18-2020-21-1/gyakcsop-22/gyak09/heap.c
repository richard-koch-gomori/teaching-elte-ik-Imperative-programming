

#include <stdio.h>
#include <stdlib.h>


int main()
{
    void* pointer; // void* : csak memóriacímet tárol
    pointer = malloc(100); // lefoglal 100 bájtot a heap-en
    //char* pointer_to_int = (char*)pointer;
    char* pointer_to_int = pointer;
    *pointer_to_int = 'A';
    *(pointer_to_int + 1) = 'B';
    free(pointer); // a lefoglalt memória felszabadítása
}



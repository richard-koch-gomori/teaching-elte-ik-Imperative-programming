// Tömbön belül sztringet (kezdő karakter pointer-ét) tárolni

#include <stdio.h>


void foo(char* string_ptrs[], int size) // vagy: void foo(char** string_ptrs, int size)
{
    for (int i = 0; i < size; ++i)
    {
        char* string = *(string_ptrs + i); // ugyanaz mint string_ptrs[i]
        printf("%dth string in string_ptrs: %s\n", i, string);
    }
}

int main()
{
    char str1[] = "string1";
    char str2[] = "this is string2";
    char str3[] = "string33333";
    
    char* array_of_string_ptrs[] = {str1, str2, str3};
    
    foo(array_of_string_ptrs, 3);
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* foo(char* str)
{
    int len = strlen(str);
    char* dest = malloc(len + 1);
    strcpy(dest, str);
    /*
    int i;
    for (i = 0; str[i] != '\0'; ++i)
    {
        dest[i] = str[i]; // *(dest + i)
    }
    dest[i] = '\0';
    */
    return dest;
}
/*
 0   4
"hello"
*/
void reverse(char* input)
{
    int len = strlen(input);
    for (int i = 0; input[i] != '\0' && i < len / 2; ++i)
    {
        int j = len - i - 1;
        char tmp = input[i];
        input[i] = input[j];
        input[j] = tmp;
    }
}


int main()
{
    char* ptr = malloc(100); // 100 bájt
    *ptr = 'A';
    printf("%c\n", *ptr);
    *(ptr + 1) = 'B';
    printf("%c\n", *(ptr + 1));
    int* iptr = (int*)(ptr + 2);
    *iptr = 2;
    printf("%c\n", *ptr);
    printf("%c\n", *(ptr + 1));
    printf("%d\n", *iptr);
    free(ptr);

    printf("Enter a string: ");
    char* original_str = malloc(21);
    fgets(original_str, 20, stdin);
    char* res = foo(original_str);
    printf("res = %s\n", res);
    
    free(original_str);


    printf("2.feladat\n");
    printf("rev elott: %s\n", res);
    reverse(res);
    printf("rev utan: %s\n", res);


    free(res);
    


    char array[] = "time";
    reverse(array);
    printf("array = %s\n", array);


    int* iptr2 = malloc(sizeof(int) * 100);
    for (int i = 0; i < 100; ++i)
    {
        *(iptr2 + i) = i; // iptr2[i] = i;
    }
    free(iptr2);
}

/*
main:
stack              heap
ptr: 0xfb100       0xfb100: A B 0 0 0 00000010 (2)  (100 db. bájt)

---------

original_str,str        0xfA user input
dest,res                0xfB user input

*/
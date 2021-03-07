

#include <stdio.h>


int length2(char str[]) // char str[] -t cseréli char* str
{
    int idx = 0;
    while (str[idx] != '\0') // str[idx] -t cseréli *(str + idx)
    {
        idx++;
    }
    return idx;
}

int length(char* ptr)
{
    int res = 0;
    while (*ptr != '\0')
    {
        ptr = ptr + 1;
        res++;
        // ptr++;
    }
    return res;
}


int main()
{
    char str[] = "hello";
    //char* ptr = &str[0];

    /*printf("%i\n", length(ptr));
    printf("%i\n", length("abs"));
    printf("%i\n", length(str));*/

    printf("%i\n", sizeof(str) );

    int arr[5] = {-1, -2, -3, -4, -5};
    printf("%i\n", arr[3]); // arr[3] -t cseréli *(arr + 3)
    //printf("%i\n", 3[arr]);
}


// Írj programot, amely megcseréli egy legalább 3 jegyű szám első és utolsó számjegyét!
// Tetszőleges sok számjegyű számra működjön!



#include <stdio.h>
#include <string.h> // strlen() miatt, vagy korábbi gyakról használható my_strlen()


#define MAX_STRING 256


int StrToInt(char array[])
{
    int res = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        printf("%i\n", array[i] - '0');
        res = 10 * res + array[i] - '0';
    }
    return res;
}

void reverse(char str[])
{
    for (int i = 0, j = strlen(str) - 1; i < j; ++i, --j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void IntToStr(char dest[], int maxsize, int num)
{
    int idx = 0;
    while (num > 0)
    {
        int current_digit = num % 10;
        printf("current_digit: %d\n", current_digit);
        dest[idx] = current_digit + '0';
        idx++;
        
        num /= 10;
    }
    dest[idx] = '\0';
    reverse(dest);
}

int main()
{
    char str[MAX_STRING];
    int num = 12345;
    
    IntToStr(str, MAX_STRING, num);
    printf("str: %s\n", str);
    
    int len = strlen(str);
    char tmp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = tmp;
    printf("str: %s\n", str);
    
    int res = StrToInt(str);
    printf("res = %d\n", res);
}






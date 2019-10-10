

#include <stdio.h>


extern void reverse(char str[]);
extern void strcount(int num, char ch, char dest[]);
extern void squeeze(char str[], char ch);
extern int strany(const char str[], const char tmp[]);


// szimbolikus állandó: fordítás közben a MAX_STRING helyére 256 kerül
// közönséges search-and-replace
#define MAX_STRING 256


int main()
{
    char arr[MAX_STRING] = "test1test";
    reverse(arr);
    printf("fel5: %s\n", arr);

    strcount(2, 'F', arr);
    printf("extra feladat: %s\n", arr);

    char arr2[MAX_STRING] = "körrrrrterrr";
    squeeze(arr2, 'r');
    printf("fel6: %s\n", arr2);

    printf("fel7: %i\n", strany("test1", "abfzk"));
}

// Szügyi Attila István megoldása

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void printline(char tomb[], const int size);

#define SIZE 16

int main()
{
    char ch;
    char tomb[SIZE];
    int i=0;
    do {
        ch = getchar();
        if(i<SIZE){
            tomb[i]=ch;
            i++;
        }
        else{
            printline(tomb, SIZE);
            i=0;
        }
    } while ( ch!= EOF );
    printf("i = %i\n", i);
    const int siz=i;
    printline(tomb, siz);
    return 0;
}
void printline(char tomb[], const int size)
{
    int i=0;
    while(i<size){
        printf("%02x ", tomb[i]);
        i++;
    }
    printf(" | ");
    i = 0;
    while(i<size){
        if (tomb[i] != ' ' && !isgraph(tomb[i]))
        {
            printf(". ");
        }
        else
        {
            printf("%c ", tomb[i]);
        }
        i++;
    }
    printf("|\n");
}

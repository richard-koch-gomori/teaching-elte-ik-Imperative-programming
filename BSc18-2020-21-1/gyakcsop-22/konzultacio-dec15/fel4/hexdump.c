

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 16

void printline(char tomb[], const int size, long int pos)
{
    printf("%08lx  ", pos);
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


int main()
{
    char ch;
    char tomb[SIZE];
    long int pos = 0;
    int i=0;
    do {
        ch = getchar();
        if(i<SIZE){
            tomb[i]=ch;
            i++;
        }
        else{
            printline(tomb, SIZE, pos);
            pos += SIZE;
            i=0;
        }
    } while ( ch!= EOF );
    pos += i;
    printline(tomb, i, pos);
    return 0;
}


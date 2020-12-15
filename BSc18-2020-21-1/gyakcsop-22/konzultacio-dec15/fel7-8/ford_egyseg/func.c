
#include "func.h"

#include <ctype.h>

char tomb[SIZE];
long int pos = 0;


void printline(const int size, long int pos)
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


int hd(FILE* f)
{
    char ch;
    int i=0;
    do {
        ch = fgetc(f);
        if(i<SIZE){
            tomb[i]=ch;
            i++;
        }
        else{
            printline(SIZE, pos);
            pos += SIZE;
            i=0;
        }
    } while ( ch!= EOF );
    //printline(i, pos);
    pos += i;
    return 0;
}



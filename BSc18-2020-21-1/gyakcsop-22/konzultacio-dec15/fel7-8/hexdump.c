// Nem 100%-os megoldás, idő hiányában félretettük

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 16


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
    printline(i, pos);
    pos += i;
    return 0;
}

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; ++i)
    {
        FILE* input = fopen(argv[i], "r");
        if (input == NULL)
        {
            return 1;
        }
        hd(input);
        fclose(input);
    }

    return 0;
}


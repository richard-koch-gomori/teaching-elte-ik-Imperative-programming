// Szügyi Attila István megoldása

#include <stdio.h>
#include <stdlib.h>

void printline(unsigned char tomb[], const int size);

#define SIZE 16

int main()
{
    unsigned char ch;
    unsigned char tomb[SIZE];
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
    const int siz=i;
    printline(tomb, siz);
    return 0;
}
void printline(unsigned char tomb[], const int size)
{
    int i=0;
    while(i<size){
        printf("%02x ", tomb[i]);
        i++;
    }
    printf("\n");
}

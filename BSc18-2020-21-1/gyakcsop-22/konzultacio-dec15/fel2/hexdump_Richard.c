

#include <stdio.h>

#define MAX_STRING 16


void printline(char str[], int counter)
{
    for (int i = 0; i < counter; ++i)
    {
        printf("%02x ", str[i]);
    }
    printf("\n");
}


int main()
{
    unsigned char str[MAX_STRING + 1];
    int counter = 0;

    do
    {
        str[counter] = getchar();
        counter++;
        if (counter == MAX_STRING)
        {
            str[MAX_STRING] = '\0';
            printline(str, MAX_STRING);
            counter = 0;
        }
    } while (str[counter] != EOF);
    printline(str, counter);

    return 0;
}

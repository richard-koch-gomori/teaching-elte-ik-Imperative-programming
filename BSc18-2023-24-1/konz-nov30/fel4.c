//fsor11/opc 2. feladat
// Hozz létre két új fájlt, amelyek ugyanannyi tetszőleges számot
// tartalmaznak. Olvasd be mindkét fájlból párhuzamosan a számokat,
// és írd ki a szorzatukat egy harmadik fájlba!
// A beolvasáshoz használd a fscanf függvényt.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ARRAY_SIZE 256

int main()
{
    //printf("%c\n", 1 + '0');
    
/*
    char tmp[ARRAY_SIZE];
    int a = 1;
    int b = 2;
    int c = 3;
    // tmp == *123*
    tmp[0] = '*';
    tmp[1] = a + '0';
    tmp[2] = b + '0';
    tmp[3] = c + '0';
    tmp[4] = '*';
    tmp[5] = '\0';
    printf("tmp = %s\n", tmp);
*/

/*  
    char tmp2[ARRAY_SIZE];
    strcpy(tmp2, "");
    strcat(tmp2, "hello world"); // tmp2 = tmp2 + "hello world"
    char a_s[ARRAY_SIZE];
    sprintf(a_s, "%d", a);
    strcat(tmp2, a_s);
    strcat(tmp2, "alma");
    printf("tmp2 = %s\n", tmp2);

    char tmp3[ARRAY_SIZE];
    sprintf(tmp3, "%d/%d/%d - hello world *%d%d%d*  %lf", 2023, 11, 30, a, b, c, 3.141592653);
    printf("tmp3 = %s\n", tmp3);

*/

    FILE* a = fopen("a.txt", "r");
    FILE* b = fopen("b.txt", "r");

    char line_a[ARRAY_SIZE];
    char line_b[ARRAY_SIZE];
    while (fgets(line_a, ARRAY_SIZE, a) != NULL
        && fgets(line_b, ARRAY_SIZE, b) != NULL)
    {
        line_a[strlen(line_a) - 1] = '\0';
        printf("line_a = %s\n", line_a);

        //fgets(line_b, ARRAY_SIZE, b);
        line_b[strlen(line_b) - 1] = '\0';
        printf("line_b = %s\n", line_b);

        int prod = atoi(line_a) * atoi(line_b);
        printf("prod = %d\n", prod);
    }

    fclose(a);
    fclose(b);
*/
}


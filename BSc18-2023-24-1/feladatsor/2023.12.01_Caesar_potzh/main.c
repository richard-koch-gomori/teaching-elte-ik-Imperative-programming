#include <stdio.h>
#include <string.h>

#include "util.h"

#define MAX_STRING 256


int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        char str[] = "hello world";
        char encrypted[MAX_STRING];
        char decrypted[MAX_STRING];

        Caesar_encrypt(str, 4, encrypted);

        printf("decrypt\n");
        Caesar_decrypt(encrypted, 4, decrypted);

        printf("encrypted = %s\n", encrypted);
        printf("decrypted = %s\n", decrypted);
        return 0;
    }

    FILE* textfile = fopen(argv[1], "r");
    if (textfile == NULL)
    {
        printf("Unabe to open file\n");
        return 1;
    }
    int freq[ABC_LENGTH] = {0};
    char line[MAX_STRING];
    while (fgets(line, MAX_STRING, textfile) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        //printf("line = %s\n", line);
        Calculate_freq(line, freq, ABC_LENGTH);
    }
    fclose(textfile);

    Print_freq(freq, ABC_LENGTH);

    int max_id = GetMaxItemIdx(freq, ABC_LENGTH);
    printf("Most freq cipher: %c\n", max_id + 'a');

    int calculated_key = max_id + 'a' - 'e';
    printf("calculated_key = %d\n", calculated_key);

    textfile = fopen(argv[1], "r");
    if (textfile == NULL)
    {
        printf("Unabe to open file\n");
        return 1;
    }

    while (fgets(line, MAX_STRING, textfile) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        char decrypted[MAX_STRING];
        Caesar_decrypt(line, calculated_key, decrypted);
        printf("%s\n", decrypted);
    }
    fclose(textfile);

    return 0;
}


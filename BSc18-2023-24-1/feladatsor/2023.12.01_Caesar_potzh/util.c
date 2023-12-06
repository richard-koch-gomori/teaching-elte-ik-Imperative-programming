#include "util.h"
#include <string.h>
#include <stdio.h>

// static nélkül is teljesértékű megoldás
static const char ABC[] = "abcdefghijklmnopqrstuvwxyz";

/*
static int get_index_of(char ch)
{
    int idx = 0;
    while (ABC[idx] != '\0')
    {
        if (ABC[idx] == ch)
        {
            return idx;
        }
        ++idx;
    }
    return -1;
}

static char get_char_from(int idx)
{
    if (idx >= 0)
    {
        return ABC[idx];
    }
    else
    {
        const int shift = idx + ABC_LENGTH;
        return ABC[shift];
    }
}
*/

void Caesar_encrypt(const char plaintext[], int key, char ciphertext[])
{
    int shift;
    if (key >= 0)
    {
        shift = key;
    }
    else
    {
        shift = key + ABC_LENGTH;
    }
    int i = 0;
    while (plaintext[i] != '\0')
    {
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            ciphertext[i] = ABC[(plaintext[i] - 'a' + shift) % ABC_LENGTH];
        }
        else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            char ch = plaintext[i] + ('a' - 'A');
            ciphertext[i] = ABC[(ch - 'a' + shift) % ABC_LENGTH];
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
        ++i;
    }
    ciphertext[i] = '\0';
}

void Caesar_decrypt(const char ciphertext[], int key, char plaintext[])
{
    Caesar_encrypt(ciphertext, -key, plaintext);
}

void Calculate_freq(const char str[], int dest[], int dest_array_size)
{
    for (int i = 0; str[i] != '\0'; ++i)
    {
        int idx = str[i] - 'a';
        if (idx < dest_array_size)
        {
            dest[idx]++;
        }
    }
}

void Print_freq(const int freq[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
    {
        printf("%c: %d\n", i + 'a', freq[i]);
    }
}

int GetMaxItemIdx(const int array[], int size)
{
    int idx = 0;
    if (size < 1) return -1;
    for (int i = 1; i < size; ++i)
    {
        if (array[i] > array[idx])
        {
            idx = i;
        }
    }
    return idx;
}

#pragma once

#define ABC_LENGTH 26

void Caesar_encrypt(const char plaintext[], int key, char ciphertext[]);
void Caesar_decrypt(const char ciphertext[], int key, char plaintext[]);
void Calculate_freq(const char str[], int dest[], int dest_array_size);
void Print_freq(const int freq[], int array_size);
int GetMaxItemIdx(const int array[], int size);



#pragma once

void decrypt_aes_cbc_192(const unsigned char *input, unsigned char *output, int length, const unsigned char *key, unsigned char *initVector);
void decrypt_aes_cbc_256(const unsigned char *input, unsigned char *output, int length, const unsigned char *key, unsigned char *initVector);
void decrypt_aes_gcm(const unsigned char *input, unsigned char *output, int length, const unsigned char *key, unsigned char *initVector);

extern int aesBlocksize;

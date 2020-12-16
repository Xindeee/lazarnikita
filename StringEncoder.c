#include <malloc.h>
#include <string.h>
#include <stdio.h>
#include "StringEncoder.h"
void encryptionMutable(char* str, int count, char key) {
	for (int i = 0;i < count;i++) {
		str[i] = (((int)(str[i])) + ((int)key)) % 128;
	}
}
char* encryptionImmutable(char* str, int count, char key) {
	char* str2 = malloc(sizeof(char) * (count+1));
	str2[count] = 0;
	for (int i = 0;i < count;i++) {
		str2[i] = (((int)(str[i])) + ((int)key)) % 128;
	}
	return str2;
}
void decryptionMutable(char* str, int count, char key) {
	for (int i = 0;i < count;i++) {
		str[i] = (((int)(str[i])) - ((int)key)+128) % 128;
	}
}
char* decryptionImmutable(char* str, int count, char key) {
	char* str2 = malloc(sizeof(char) * (count + 1));
	str2[count] = 0;
	for (int i = 0;i < count;i++) {
		str2[i] = (((int)(str[i])) - ((int)key)+128) % 128;
	}
	return str2;
}
void XoraliseMutable(char* str, int count, char * key) {
	int keylen = strlen(key);
	for (int i = 0;i < count;i++) {
		str[i] ^= key[i % keylen];
	}
}
char* XoraliseImmutable(char* str, int count, char * key) {
	int keylen = strlen(key);
	char* str2 = malloc(sizeof(char) * (count + 1));
	str2[count] = 0;
	for (int i = 0;i < count;i++) {
		str2[i] = str[i] ^ key[i % keylen];
	}
	return str2;
}
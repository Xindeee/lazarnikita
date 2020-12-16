#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "StringFormatter.h"
#include "StringEncoder.h"

int main(int argc, char* argv[]) {
	int i;
	if (argc == 4) {
		if (strcmp(argv[1], "--caesar") == 0) {
			if (isNumeric(argv[3], strlen(argv[3]))) {
				int shift = atoi(argv[3]);
				int count = strlen(argv[2]);
				printf("Encoded string = %s\n",encryptionImmutable(toLowerImmutable(stripImmutable(argv[2], count),count), count, shift));
			}
			else {
				printf("Uncorrect shift for encoding, must be numerical [-10 - +10]\n");
			}
		}
		else if (strcmp(argv[1], "--xor") == 0) {
			int count = strlen(argv[2]);
			printf("Encoded string = %s\n", XoraliseImmutable(toLowerImmutable(stripImmutable(argv[2], count), count), count, argv[3]));
		}
		else {
			printf("Uncorrect method encoding, could be [--caesar | --xor]\n");
		}
	}
	else {
		printf("Has no parameters, could be [--method \"sometext\" key]\n");
	}
	return 0;
}
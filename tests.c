#include <stdio.h>
#include "HeaderTest.h"
void testtoUpperMutable() {
	char str1[] = "Hello world 123";
	char str2[] = "HELLO WORLD 123";
	int n = 15;
	toUpperMutable(str1, n);
	if (strcmp(str1, str2) == 0) {
		printf("testtoUpperMutable - proved\n");
	}
	else {
		printf("testtoUpperMutable - not proved\n");
	}
}

void testtoUpperImmutable() {
	char str1[] = "Hello world 123";
	char str2[] = "HELLO WORLD 123";
	char* str3;
	int n = 15;
	str3=toUpperImmutable(str1, n);
	if (strcmp(str3, str2) == 0) {
		printf("testtoUpperImmutable - proved\n");
	}
	else {
		printf("testtoUpperImmutable - not proved\n");
	}
}

void testtoLowerMutable() {
	char str1[] = "HeLLO WOrld 123";
	char str2[] = "hello world 123";
	int n = 15;
	toLowerMutable(str1, n);
	if (strcmp(str1, str2) == 0) {
		printf("testtoLowerMutable - proved\n");
	}
	else {
		printf("testtoLowerMutable - not proved\n");
	}
}

void testtoLowerImmutable() {
	char str1[] = "HeLLO WOrld 123";
	char str2[] = "hello world 123";
	char* str3;
	int n = 15;
	str3 = toLowerImmutable(str1, n);
	if (strcmp(str3, str2) == 0) {
		printf("testtoLowerImmutable - proved\n");
	}
	else {
		printf("testtoLowerImmutable - not proved\n");
	}
}

void teststripMutable() {
	char* str1 = malloc(sizeof(char) * 14);
	char str2[] = "H WO 123";
	str1[0] = ' ';
	str1[1] = ' ';
	str1[2] = ' ';
	str1[3] = ' ';
	str1[4] = 'H';
	str1[5] = ' ';
	str1[6] = 'W';
	str1[7] = 'O';
	str1[8] = ' ';
	str1[9] = '1';
	str1[10] = '2';
	str1[11] = '3';
	str1[12] = ' ';
	str1[13] = 0;
	int n = 13;
	stripMutable(&str1, &n);
	if (strcmp(str1, str2) == 0) {
		printf("teststripMutable - proved\n");
	}
	else {
		printf("teststripMutable - not proved\n");
	}
}

void teststripImmutable() {
	char str1[] = "    HeLLO WOrld 123   ";
	char str2[] = "HeLLO WOrld 123";
	char* str3;
	int n = 22;
	str3 = stripImmutable(str1, n);
	if (strcmp(str3, str2) == 0) {
		printf("teststripImmutable - proved\n");
	}
	else {
		printf("teststripImmutable - not proved\n");
	}

}


void testdispaceMutable() {
	char* str1 = malloc(sizeof(char) * 14);
	char str2[] = "HWO123";
	str1[0] = ' ';
	str1[1] = ' ';
	str1[2] = ' ';
	str1[3] = ' ';
	str1[4] = 'H';
	str1[5] = ' ';
	str1[6] = 'W';
	str1[7] = 'O';
	str1[8] = ' ';
	str1[9] = '1';
	str1[10] = '2';
	str1[11] = '3';
	str1[12] = ' ';
	str1[13] = 0;
	int n = 13;
	dispaceMutable(&str1, &n);
	if (strcmp(str1, str2) == 0) {
		printf("testdispaceMutable - proved\n");
	}
	else {
		printf("testdispaceMutable - not proved\n");
	}
}

void testdispaceImmutable() {
	char str1[] = "    HeLLO WOrld 123   ";
	char str2[] = "HeLLOWOrld123";
	char* str3;
	int n = 22;
	str3 = dispaceImmutable(str1, n);
	if (strcmp(str3, str2) == 0) {
		printf("testdispaceImmutable - proved\n");
	}
	else {
		printf("testdispaceImmutable - not proved\n");
	}
}

void testdispecialiseMutable() {
	char* str1 = malloc(sizeof(char) * 14);
	char str2[] = " H WO 123 ";
	str1[0] = ' ';
	str1[1] = '@';
	str1[2] = '@';
	str1[3] = '+';
	str1[4] = 'H';
	str1[5] = ' ';
	str1[6] = 'W';
	str1[7] = 'O';
	str1[8] = ' ';
	str1[9] = '1';
	str1[10] = '2';
	str1[11] = '3';
	str1[12] = ' ';
	str1[13] = 0;
	int n = 13;
	dispecialiseMutable(&str1, &n);
	if (strcmp(str1, str2) == 0) {
		printf("testdispecialiseMutable - proved\n");
	}
	else {
		printf("testdispecialiseMutable - not proved\n");
	}

}

void testdispecialiseImmutable() {
	char str1[] = " # ## HeLLO WOrld @123 +-  ";
	char str2[] = "   HeLLO WOrld 123   ";
	char* str3;
	int n = 27;
	str3 = dispecialiseImmutable(str1, n);
	if (strcmp(str3, str2) == 0) {
		printf("testdispecialiseImmutable - proved\n");
	}
	else {
		printf("testdispecialiseImmutable - not proved\n");
	}

}

void testisNumeric() {
	char str1[] = "123413";
	char str2[] = "HeLLO WOrld 123";
	int n1 = 6;
	int n2 = 15;
	char flag1 = 0;
	char flag2 = 0;
	if (isNumeric(str1,n1) == 1) {
		flag1 = 1;
	}
	else {
		printf("testisNumeric - not proved\n");
		return;
	}

	if (isNumeric(str2, n2) == 0) {
		flag2 = 1;
	}
	else {
		printf("testisNumeric - not proved\n");
		return;
	}
	if (flag1 == 1 && flag2 == 1) {
		printf("testisNumeric - proved\n");
	}
}

void testisAlphabetic() {
	char str1[] = "HeLLOWOrld";
	char str2[] = "HWW123413";
	int n1 = 10;
	int n2 = 9;
	char flag1 = 0;
	char flag2 = 0;
	if (isAlphabetic(str1, n1) == 1) {
		flag1 = 1;
	}
	else {
		printf("testisAlphabetic - not proved\n");
		return;
	}

	if (isAlphabetic(str2, n2) == 0) {
		flag2 = 1;
	}
	else {
		printf("testisAlphabetic - not proved\n");
		return;
	}
	if (flag1 == 1 && flag2 == 1) {
		printf("testisAlphabetic - proved\n");
	}

}

void testencryptionImmutable() {
	char str1[] = "Hello!";
	int n = 6;
	int key = 3;
	char str2[] = "Khoor$";
	char * str3;
	str3= encryptionImmutable(str1, n, key);
	if ((strcmp(str3, str2) == 0)) {
		printf("testencryptionImmutable - proved\n");
	}
	else {
		printf("testencryptionImmutable - not proved\n");
	}
}

void testencryptionMutable() {
	char str1[] = "Hello!";
	int n = 6;
	int key = 3;
	encryptionMutable(str1, n, key);
	char str2[] = "Khoor$";
	if ((strcmp(str1, str2) == 0)) {
		printf("testencryptionMutable - proved\n");
	}
	else {
		printf("testencryptionMutable - not proved\n");
	}

}

void testdecryptionMutable() {
	char str2[] = "Hello!";
	int n = 6;
	int key = 3;
	char str1[] = "Khoor$";
	decryptionMutable(str1, n, key);
	if ((strcmp(str1, str2) == 0)) {
		printf("testdecryptionMutable - proved\n");
	}
	else {
		printf("testdecryptionMutable - not proved\n");
	}
}

void testdecryptionImmutable() {
	char str2[] = "Hello!";
	int n = 6;
	int key = 3;
	char str1[] = "Khoor$";
	char* str3;
	str3 = decryptionImmutable(str1, n, key);
	if ((strcmp(str3, str2) == 0)) {
		printf("testdecryptionImmutable - proved\n");
	}
	else {
		printf("testdecryptionImmutable - not proved\n");
	}
}

void testXoraliseMutable() {
	char str1[] = "Hello!";
	int n = 6;
	char * key = "3";
	XoraliseMutable(str1, n, key);
	char str2[] = "Kfool\"";
	if ((strcmp(str1, str2) == 0)) {
		printf("testXoraliseMutable - proved\n");
	}
	else {
		printf("testXoraliseMutable - not proved\n");
	}
}

void testXoraliseImmutable() {
	char str2[] = "Hello!";
	int n = 6;
	char * key = "3";
	char str1[] = "Kfool\"";
	char* str3;
	str3 = XoraliseImmutable(str2, n, key);
	if ((strcmp(str3, str1) == 0)) {
		printf("testXoraliseImmutable - proved\n");
	}
	else {
		printf("testXoraliseImmutable - not proved\n");
	}
}
int main() {
	testtoUpperMutable();
	testtoUpperImmutable();
	testtoLowerMutable();
	testtoLowerImmutable();
	teststripMutable();
	teststripImmutable();
	testdispaceMutable();
	testdispaceImmutable();
	testdispecialiseMutable();
	testdispecialiseImmutable();
	testisNumeric();
	testisAlphabetic();
	testencryptionImmutable();
	testencryptionMutable();
	testdecryptionMutable();
	testdecryptionImmutable();
	testXoraliseMutable();
	testXoraliseImmutable();
}

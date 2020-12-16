#include <malloc.h>
#include <string.h>
#include <stdio.h>
#include "StringFormatter.h"

void toUpperMutable(char* str, int count) {
	for (int i = 0;i < count;i++) {
		if ((str[i] >= 'a') && (str[i] < 'z')) {
			str[i] -= 32;
		}
	}
}

char* toUpperImmutable(char* str, int count) {
	char* str2 = malloc(sizeof(char) * (count+1));
	str2[count] = 0;
	for (int i = 0;i < count;i++) {
		if ((str[i] >= 'a') && (str[i] < 'z')) {
			str2[i] =str[i]-32;
		}
		else {
			str2[i] = str[i];
		}
	}
	return str2;
}

void toLowerMutable(char* str, int count) {
	for (int i = 0;i < count;i++) {
		if ((str[i] >= 'A') && (str[i] < 'Z')) {
			str[i] += 32;
		}
	}
}
char* toLowerImmutable(char* str, int count){
	char* str2 = malloc(sizeof(char) * (count + 1));
	str2[count] = 0;
	for (int i = 0;i < count;i++) {
		if ((str[i] >= 'A') && (str[i] < 'Z')) {
			str2[i] = str[i] + 32;
		}
		else {
			str2[i] = str[i];
		}
	}
	return str2;
}
void stripMutable(char** str, int *count) {
	int startSpaces = 0;
	int endSpaces = 0;
	for (int i = 0;i < *count;i++) {
		if ((*str)[i] == ' ') {
			startSpaces++;
		}
		else {
			break;
		}
	}
	for (int i =*count-1;i >= 0;i--) {
		if ((*str)[i] == ' ') {
			endSpaces++;
		}
		else {
			break;
		}
	}
	if (startSpaces == *count) {
		free(*str);
		*str = malloc(sizeof(char));
		(*str)[0] = 0;
		*count = 0;
	}
	else {
		char* str2 = malloc(sizeof(char) * (*count - endSpaces - startSpaces + 1));
		memcpy(str2, *str+sizeof(char)*startSpaces, sizeof(char) * (*count - endSpaces - startSpaces + 1));
		str2[*count - endSpaces - startSpaces] = 0;
		free(*str);
		*str = str2;
		*count = *count - endSpaces - startSpaces;
	}
}
char* stripImmutable(char* str, int count) {
	int startSpaces = 0;
	int endSpaces = 0;
	for (int i = 0;i < count;i++) {
		if (str[i] == ' ') {
			startSpaces++;
		}
		else {
			break;
		}
	}
	for (int i = count - 1;i >= 0;i--) {
		if (str[i] == ' ') {
			endSpaces++;
		}
		else {
			break;
		}
	}
	if (startSpaces == count) {
		char *str2 = malloc(sizeof(char));
		str2[0] = 0;
		return str2;
	}
	else {
		char* str2 = malloc(sizeof(char) * (count - endSpaces - startSpaces + 1));
		memcpy(str2, str + sizeof(char) * startSpaces, sizeof(char) * (count - endSpaces - startSpaces + 1));
		str2[count - endSpaces - startSpaces] = 0;
		return str2;
	}
}
void dispaceMutable(char** str, int* count) {
	int nonSpaces = 0;
	for (int i = 0;i < *count;i++) {
		if ((*str)[i] != ' ') {
			nonSpaces++;
		}
	}
	char* str2 = malloc(sizeof(char) * (nonSpaces + 1));
	for (int i = 0, k=0;i < *count;i++) {
		if ((*str)[i] != ' ') {
			str2[k] = (*str)[i];
			k++;
		}
	}
	str2[nonSpaces]=0;
	free(*str);
	*str = str2;
	*count = nonSpaces;
}
char* dispaceImmutable(char* str, int count) {
	int nonSpaces = 0;
	for (int i = 0;i < count;i++) {
		if (str[i] != ' ') {
			nonSpaces++;
		}
	}
	char* str2 = malloc(sizeof(char) * (nonSpaces + 1));
	for (int i = 0, k = 0;i < count;i++) {
		if (str[i] != ' ') {
			str2[k] = str[i];
			k++;
		}
	}
	str2[nonSpaces] = 0;
	return str2;
}
void dispecialiseMutable(char** str, int* count) {
	int sentSymb = 0;
	for (int i = 0;i < *count;i++) {
		if (((*str)[i] == ' ')|| ((*str)[i]>='0'&& (*str)[i] <= '9') || ((*str)[i] >= 'a' && (*str)[i] <= 'z') || ((*str)[i] >= 'A' && (*str)[i] <= 'Z')) {
			sentSymb++;
		}
	}
	char* str2 = malloc(sizeof(char) * (sentSymb + 1));
	for (int i = 0, k = 0;i < *count;i++) {
		if (((*str)[i] == ' ') || ((*str)[i] >= '0' && (*str)[i] <= '9') || ((*str)[i] >= 'a' && (*str)[i] <= 'z') || ((*str)[i] >= 'A' && (*str)[i] <= 'Z')) {
			str2[k] = (*str)[i];
			k++;
		}
	}
	str2[sentSymb] = 0;
	free(*str);
	*str = str2;
	*count = sentSymb;
}

char* dispecialiseImmutable(char* str, int count) {
	int sentSymb = 0;
	for (int i = 0;i < count;i++) {
		if ((str[i] == ' ') || (str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			sentSymb++;
		}
	}
	char* str2 = malloc(sizeof(char) * (sentSymb + 1));
	for (int i = 0, k = 0;i < count;i++) {
		if ((str[i] == ' ') || (str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			str2[k] = str[i];
			k++;
		}
	}
	str2[sentSymb] = 0;
	return str2;
}
char isNumeric(char* str, int count) {
	int i = 0;
	if (str[i] == '-')
		i++;
	for (;i < count;i++) {
		if (!(str[i] >= '0' && str[i] <= '9')) {
			return 0;
		}
	}
	return 1;
}
char isAlphabetic(char* str, int count) {
	for (int i = 0;i < count;i++) {
		if (!(str[i] >= 'a' && str[i] <= 'z'|| str[i] >= 'A' && str[i] <= 'Z')) {
			return 0;
		}
	}
	return 1;
}



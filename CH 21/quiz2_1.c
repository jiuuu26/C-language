#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int ContoInt(char c) {
	int diff = 1 - '1';
	return c + diff;
}


int main(void) {

	int i;
	int integerSum=0;
	char str[50];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= '1' && str[i] <= '9') {
			integerSum += ContoInt(str[i]);
		}
	}
	printf("%d", integerSum);

	return 0;
}
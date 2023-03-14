#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 영단어 입력 받고 char형 배열에 저장 후 단어 역순으로 뒤집기 */

int main(void) {

	char str[50];
	int len = 0;
	int i;
	char temp = ' ';

	printf("문자 입력: ");
	scanf("%s", str);

	while (str[len] != '\0') {
		len++;
	}


	for (i = 0; i < len / 2; i++) {

		temp = str[i];
		str[i] = str[(len - i) - 1];
		str[(len - i) - 1] = temp;
	}

	printf("%s", str);

	return 0;
}
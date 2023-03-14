#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 영단어 입력 받고 길이 출력 */

int main(void) {

	char str[100];
	int len = 0;

	printf("영단어 입력: ");
	scanf("%s", str);

	while (str[len] != 0) {
		len++;
	}

	printf("%d", len);

}
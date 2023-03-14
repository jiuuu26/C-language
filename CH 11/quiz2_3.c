#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 영단어 입력 받고 아스키 코드 값이 가장 큰 문자 출력 */

int main(void) {

	char str[50];
	int i;
	int len = 0;
	int max;

	printf("영단어 입력: ");
	scanf("%s", str);

	while (str[len] != '\0') {
		len++;
	}

	max = str[0];

	for (i = 1; i < len; i++) {
		if (max < str[i]) {
			max = str[i];
		}
	}

	printf("%c", max);


}
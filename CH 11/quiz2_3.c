#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ���ܾ� �Է� �ް� �ƽ�Ű �ڵ� ���� ���� ū ���� ��� */

int main(void) {

	char str[50];
	int i;
	int len = 0;
	int max;

	printf("���ܾ� �Է�: ");
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ���ܾ� �Է� �ް� char�� �迭�� ���� �� �ܾ� �������� ������ */

int main(void) {

	char str[50];
	int len = 0;
	int i;
	char temp = ' ';

	printf("���� �Է�: ");
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
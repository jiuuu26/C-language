#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int ch;

	ch = getchar();

	//�빮���� ��
	if (ch > 64 && ch < 91) {
		ch += 32;
		putchar(ch);
	}
	//�ҹ����� ��
	else if (ch > 96 && ch < 123) {
		ch -= 32;
		putchar(ch);
	}
	else {
		puts("���ĺ��� �Է����ּ���.");
	}

	
}
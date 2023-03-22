#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int ch;

	ch = getchar();

	//대문자일 때
	if (ch > 64 && ch < 91) {
		ch += 32;
		putchar(ch);
	}
	//소문자일 때
	else if (ch > 96 && ch < 123) {
		ch -= 32;
		putchar(ch);
	}
	else {
		puts("알파벳을 입력해주세요.");
	}

	
}
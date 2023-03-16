#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*회문은 앞뒤로 읽어도 차이가 없는 단어이다. 회문인지 아닌지 판단하는 함수를 만들어 출력*/

void Palindrome(char param[], int length) {
	
	int i;
	int j = 0;

	//문자의 앞뒤로 아스키코드 값을 비교
	for (i = 0; i < length / 2; i++) {
		if (param[i] == param[length - i - 1]) j++;
	}

	//앞뒤가 대칭으로 같아야 j=i일 것이므로
	if (j == i) printf("회문입니다.");
	else printf("회문이 아닙니다.");
}

int main(void) {

	char str[50];
	int len;

	printf("단어 입력: ");
	scanf("%s", str);

	//strlen 함수는 문자열의 길이를 반환하되, 널 문자의 길이는 포함하지 않는다.
	len = strlen(str);

	Palindrome(str, len);

}
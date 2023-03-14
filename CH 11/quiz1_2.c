#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* char형 배열 선언, 문장 "Good time"으로 초기화 후 내용 출력 */

int main(void)
{
	char arr[] = { 'G','o','o','d',' ','t','i','m','e' };
	//char arr[] = { "Good time" };
	int i;
	int len;
	len = sizeof(arr) / sizeof(char);

	for (i = 0; i < len; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;

}
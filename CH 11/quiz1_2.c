#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* char�� �迭 ����, ���� "Good time"���� �ʱ�ȭ �� ���� ��� */

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
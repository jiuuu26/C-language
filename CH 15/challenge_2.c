#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*10���� ���� �Է� �ް� 2������ ��ȯ�ؼ� ���*/

int main(void) {

	int n, i, j;
	int arr[50];

	printf("10���� ���� �Է�: ");
	scanf("%d", &n);

	i = 0;

	//2������ ��ȯ
	while (1) {
		arr[i] = (n % 2);
		if (n == 1) break;
		n /= 2;
		i++;
	}

	//���
	for (j = i; j >= 0; j--) {
		printf("%d", arr[j]);
	}


}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int�� �迭 arr���� �� ������ ���� ptr�� ����� ���� �ٲ��� �ʴ� ������ ���·� �迭��ҿ� �����ϸ� �� 2�� ����*/

int main(void) {

	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[0];
	int i;

	for (i = 0; i < 5; i++) {
		*(ptr + i) += 2;
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
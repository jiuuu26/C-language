#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int�� �迭 arr���� �� ������ ���� ptr�� ����� �� ������Ű�� ������ ���·� �迭��ҿ� �����ϸ� �� 2�� ����*/

int main (void) {

	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;
	*ptr += 2;
	*(++ptr) += 2;
	*(++ptr) += 2;
	*(++ptr) += 2;
	*(++ptr) += 2;

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;

}
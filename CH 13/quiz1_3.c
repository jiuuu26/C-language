#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int�� �迭 arr���� �� ������ ���� ptr�� ����� ���� ���ҽ�Ű�� ������ ���·� �迭��ҿ� �����ϸ� �迭�� ����� ������ �� ���ϱ�*/

int main(void) {

	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int i, sum=0;

	for (i = 0; i < 5; i++) {
		sum += *(ptr --);
	}

	printf("%d", sum);

	return 0;
}
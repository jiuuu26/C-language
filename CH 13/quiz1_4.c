#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int�� �迭 arr���� �� ������ ���� ptr�� ����� ���� ���ҽ�Ű�� ������ ���·� �迭��ҿ� �����ϸ� �迭�� ����� ������ �� ���ϱ�*/

int main(void) {

	int arr[6] = { 1,2,3,4,5,6 };
	int* front_ptr = &arr[0];
	int* back_ptr = &arr[5];
	int* temp = NULL;
	int i;

	for (i = 0; i < (6/2); i++) {
		temp = *front_ptr;
		*(front_ptr++) = *(back_ptr);
		*(back_ptr--) = temp;
	}
	
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

/*���� ���� 9 ���� ���� 3�� int�� 2���� �迭 �����Ͽ� ������ �� 2�� ,3�� ,4�� ����*/

int main(void) {

	int i, j;
	int arr[3][9];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++) {
			arr[i][j] = (i+2) * (j+1);
		}
	}


	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	
}
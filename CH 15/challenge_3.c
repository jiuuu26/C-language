#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*���� �Է� �ް� Ȧ���� �տ������� ¦���� �ڿ������� �迭 ä��������*/

int main(void) {
	
	int n;
	int i,k,j;
	int arr[10];
	int result[10];

	printf("�� 10�� ���� �Է�\n");
	for (i = 0; i < 10; i++) {

		printf("�Է�: ");
		scanf("%d", &arr[i]);

	}

	i = 0;
	
	for (k = 0; k < 10; k++) {
		if (arr[k] % 2 != 0) {
			result[i] = arr[k];
			i++;
		}
	}

	j = 9;
	
	for (k = 0; k < 10;k++) {
		if (arr[k] % 2 == 0) {
			result[j] = arr[k];
			j--;
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", result[i]);
	}
	

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*���������� �̿��Ͽ� ������������ �迭 ����*/

void DesSort(int array[],int length);

int main(void) {

	int arr[7];
	int i, len;

	for (i = 0; i < 7; i++) {
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}

	len = sizeof(arr) / sizeof(int);

	DesSort(arr, len);

	printf("�������� ����: ");
	for (i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

void DesSort(int array[], int length) {

	int i,j;
	int temp;

	for (i = 0; i < length-1; i++) {
		for (j = 0; j < length - i-1; j++) {
			if (array[j]<array[j+1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/* int�� �迭 �����Ͽ� 5���� ���� �Է� �ް� �ִ밪, �ּҰ�, �� �� ��� */


int main(void)
{

	int arr[5];
	int max, min, sum = 0, i;


	for (i = 0; i < 5; i++) {
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	for (i = 1; i < 5; i++) {

		if (max < arr[i]) {
			max = arr[i];
		}
	}
	min = arr[0];

	for (i = 1; i < 5; i++) {

		if (min > arr[i]) {
			min = arr[i];
		}
	}

	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}

	printf("�ִ밪: %d\n", max);
	printf("�ּҰ�: %d\n", min);
	printf("��: %d", sum);


}



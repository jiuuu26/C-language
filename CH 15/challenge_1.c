#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*���̰� 10�� �迭�� ���� �Է� �ް� ¦��, Ȧ�� ���� ����ϴ� �Լ� ����� ȣ��*/

void Even(int param[]) {
	int i = 0;
	printf("¦�� ���: ");
	for (i = 0; i < 10; i++) {
		if (param[i] % 2 == 0) {
			
			printf("%d ",param[i]);
		}
	}
}

void Odd(int param[]) {
	int i = 0;
	printf("Ȧ�� ���: ");
	for (i = 0; i < 10; i++) {
		if (param[i] % 2 != 0) {

			printf("%d ", param[i]);
		}
	}
}

int main(void) {

	int arr[10];
	int i;
	int even=0, odd=0;

	for (i = 0; i < 10; i++) {

		printf(" % d��° ���� �Է� : ", i+1);
		scanf("%d", &arr[i]);
	}

	Even(&arr);
	printf('\n');
	Odd(&arr);
	

}
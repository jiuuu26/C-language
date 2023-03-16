#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*길이가 10인 배열에 정수 입력 받고 짝수, 홀수 따로 출력하는 함수 만들어 호출*/

void Even(int param[]) {
	int i = 0;
	printf("짝수 출력: ");
	for (i = 0; i < 10; i++) {
		if (param[i] % 2 == 0) {
			
			printf("%d ",param[i]);
		}
	}
}

void Odd(int param[]) {
	int i = 0;
	printf("홀수 출력: ");
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

		printf(" % d번째 정수 입력 : ", i+1);
		scanf("%d", &arr[i]);
	}

	Even(&arr);
	printf('\n');
	Odd(&arr);
	

}
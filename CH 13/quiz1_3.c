#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int형 배열 arr선언 후 포인터 변수 ptr에 저장된 값을 감소시키는 연산의 형태로 배열요소에 접근하며 배열에 저장된 정수의 합 구하기*/

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
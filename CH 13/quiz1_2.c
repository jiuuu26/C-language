#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int형 배열 arr선언 후 포인터 변수 ptr에 저장된 값을 바꾸지 않는 연산의 형태로 배열요소에 접근하며 값 2씩 증가*/

int main(void) {

	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[0];
	int i;

	for (i = 0; i < 5; i++) {
		*(ptr + i) += 2;
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
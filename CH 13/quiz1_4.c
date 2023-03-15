#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int형 배열 arr선언 후 포인터 변수 ptr에 저장된 값을 감소시키는 연산의 형태로 배열요소에 접근하며 배열에 저장된 정수의 합 구하기*/

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
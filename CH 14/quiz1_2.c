#define _CRT_SECURE_NOWARNINGS
#include <stdio.h>

/*세 변수에 저장된 값을 서로 뒤바꾸는 함수 정의하기*/

void Swap(int* n1, int* n2, int* n3) {

	int temp1 = *n1;
	*n1 = *n3;
	int temp2 = *n2;
	*n2 = temp1;
	*n3 = temp2;

}

int main(void) {

	int num1 = 10, num2 = 20, num3 = 30;
	
	Swap(&num1,&num2,&num3);

	printf("num1 num2 num3: %d %d %d", num1, num2, num3);

}
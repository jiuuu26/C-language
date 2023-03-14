#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*포인터를 이용하여 변수의 값을 변경 후 각 포인터가 가리키는 변수를 서로 바꾸기*/

int main(void) {

	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp = NULL;

	(*ptr1) += 10;	//num1을 10 증가
	(*ptr2) -= 10;	//num2를 10 감소


	temp = ptr1;	//temp 포인터형 변수가 num1을 가리킴 -> temp= &num1
	ptr1 = ptr2;	//ptr1 포인터형 변수가 num2을 가리킴 -> ptr1= &num2
	ptr2 = temp;	//ptr2 포인터형 변수가 num1을 가리킴 -> ptr2= &num1

	/* 아래와 같은 코드를 사용해도 결과가 같음
	ptr1 = &num2;
	ptr2 = &num1;
	*/

	printf("ptr1: %d, ptr2: %d", *ptr1, *ptr2);


}
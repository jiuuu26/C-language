#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*�����͸� �̿��Ͽ� ������ ���� ���� �� �� �����Ͱ� ����Ű�� ������ ���� �ٲٱ�*/

int main(void) {

	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp = NULL;

	(*ptr1) += 10;	//num1�� 10 ����
	(*ptr2) -= 10;	//num2�� 10 ����


	temp = ptr1;	//temp �������� ������ num1�� ����Ŵ -> temp= &num1
	ptr1 = ptr2;	//ptr1 �������� ������ num2�� ����Ŵ -> ptr1= &num2
	ptr2 = temp;	//ptr2 �������� ������ num1�� ����Ŵ -> ptr2= &num1

	/* �Ʒ��� ���� �ڵ带 ����ص� ����� ����
	ptr1 = &num2;
	ptr2 = &num1;
	*/

	printf("ptr1: %d, ptr2: %d", *ptr1, *ptr2);


}
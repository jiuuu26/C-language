#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*ptr1�� ptr2 ��� num�� ����Ű�Ƿ� ��� ��(num)�� 12*/

int main(void) {

	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;	//*ptr2 = &num

	(*ptr1)++;
	(*ptr2)++;

	printf("%d\n", num);
	return 0;

}
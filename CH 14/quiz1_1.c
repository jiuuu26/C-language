#define _CRT_SECURE_NOWARNINGS
#include <stdio.h>

/*num�� ����Ǿ� �ִ� ���� �����ϴ� �Լ��� call-by-value�� call-by-reference ������� ����*/

int SquareByValue(int num) {

	return num*num;
}

void SquareByReference(int *ptr) {
	
	int num = *ptr;
	*ptr = num * num;
	

}


int main(void) {

	int n1 = 5;
	int value=SquareByValue(n1);
	printf("value: %d n1: %d\n", value,n1);

	SquareByReference(&n1);
	printf("reference n1: %d\n", n1);


}

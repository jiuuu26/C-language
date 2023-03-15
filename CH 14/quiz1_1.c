#define _CRT_SECURE_NOWARNINGS
#include <stdio.h>

/*num에 저장되어 있는 값을 제곱하는 함수를 call-by-value와 call-by-reference 방식으로 정의*/

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

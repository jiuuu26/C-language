#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*정수 입력 받고 홀수는 앞에서부터 짝수는 뒤에서부터 배열 채워나가기*/

int main(void) {
	
	int n;
	int i,k,j;
	int arr[10];
	int result[10];

	printf("총 10개 숫자 입력\n");
	for (i = 0; i < 10; i++) {

		printf("입력: ");
		scanf("%d", &arr[i]);

	}

	i = 0;
	
	for (k = 0; k < 10; k++) {
		if (arr[k] % 2 != 0) {
			result[i] = arr[k];
			i++;
		}
	}

	j = 9;
	
	for (k = 0; k < 10;k++) {
		if (arr[k] % 2 == 0) {
			result[j] = arr[k];
			j--;
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", result[i]);
	}
	

}
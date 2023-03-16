#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*10진수 정수 입력 받고 2진수로 변환해서 출력*/

int main(void) {

	int n, i, j;
	int arr[50];

	printf("10진수 정수 입력: ");
	scanf("%d", &n);

	i = 0;

	//2진수로 변환
	while (1) {
		arr[i] = (n % 2);
		if (n == 1) break;
		n /= 2;
		i++;
	}

	//출력
	for (j = i; j >= 0; j--) {
		printf("%d", arr[j]);
	}


}
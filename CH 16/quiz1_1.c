#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

/*가로 길이 9 세로 길이 3인 int형 2차원 배열 선언하여 구구단 중 2단 ,3단 ,4단 저장*/

int main(void) {

	int i, j;
	int arr[3][9];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++) {
			arr[i][j] = (i+2) * (j+1);
		}
	}


	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	
}
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

/*arr2�� arr1�� �̿��Ͽ� �ʱ�ȭ*/

int main(void) {

	int i, j;
	int arr1[2][4] = {1,2,3,4,5,6,7,8};
	int arr2[4][2];


	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			arr2[j][i] = arr1[i][j];
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

}
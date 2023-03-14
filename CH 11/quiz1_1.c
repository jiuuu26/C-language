#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/* int형 배열 선언하여 5개의 정수 입력 받고 최대값, 최소값, 총 합 출력 */


int main(void)
{

	int arr[5];
	int max, min, sum = 0, i;


	for (i = 0; i < 5; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	for (i = 1; i < 5; i++) {

		if (max < arr[i]) {
			max = arr[i];
		}
	}
	min = arr[0];

	for (i = 1; i < 5; i++) {

		if (min > arr[i]) {
			min = arr[i];
		}
	}

	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}

	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);
	printf("합: %d", sum);


}



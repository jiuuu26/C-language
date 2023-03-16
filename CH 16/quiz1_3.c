#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int score[5][5];
	int i, j;
	int sub_sum=0, total_sum=0;

	for (i = 0; i < 4; i++) {

		if (i == 0) {
			printf("철희 국영수사: ");
		}
		if (i == 1) {
			printf("철수 국영수사: ");
		}
		if (i == 2) {
			printf("영희 국영수사: ");
		}
		if (i == 3) {
			printf("영수 국영수사: ");
		}
		

		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			
		}

	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			sub_sum += score[j][i];
			score[4][i]=sub_sum;

			total_sum += score[i][j];
			score[i][4]=total_sum;
		}
		sub_sum = 0;
		total_sum = 0;
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == 4 || j == 4) {
				if (i == 4 && j == 4) {
					score[i][j] = total_sum/2;
				}
				else {
					total_sum += score[i][j];
				}				
			}
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}

}
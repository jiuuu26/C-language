#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {

	char str1[20];
	char str2[20];
	char str3[40];

	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	str1[strlen(str1) - 1]=0;	//�ι��� ����
	str2[strlen(str2) - 1]=0;	//�ι��� ������


	strcpy(str3, str1);
	strcat(str3, str2);

	printf("��� : %s", str3);



}
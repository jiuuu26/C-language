#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*ȸ���� �յڷ� �о ���̰� ���� �ܾ��̴�. ȸ������ �ƴ��� �Ǵ��ϴ� �Լ��� ����� ���*/

void Palindrome(char param[], int length) {
	
	int i;
	int j = 0;

	//������ �յڷ� �ƽ�Ű�ڵ� ���� ��
	for (i = 0; i < length / 2; i++) {
		if (param[i] == param[length - i - 1]) j++;
	}

	//�յڰ� ��Ī���� ���ƾ� j=i�� ���̹Ƿ�
	if (j == i) printf("ȸ���Դϴ�.");
	else printf("ȸ���� �ƴմϴ�.");
}

int main(void) {

	char str[50];
	int len;

	printf("�ܾ� �Է�: ");
	scanf("%s", str);

	//strlen �Լ��� ���ڿ��� ���̸� ��ȯ�ϵ�, �� ������ ���̴� �������� �ʴ´�.
	len = strlen(str);

	Palindrome(str, len);

}
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int findSpace(char str[]) {
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] == ' ') return i;
	}
}

int CompName(char str1[], char str2[]) {
	
	int idx1,idx2;
	idx1 = findSpace(str1);
	idx2 = findSpace(str2);

	if (idx1 != idx2) return 0;
	else return !strncmp(str1, str2, idx1);

}

int CompAge(char str1[], char str2[]) {
	int idx1, idx2;
	idx1 = findSpace(str1);
	idx2 = findSpace(str2);

	int age1, age2;
	age1 = atoi(&str1[idx1 + 1]);
	age2 = atoi(&str2[idx1 + 1]);

	if (age1 == age2) return 1;
	else return 0;
}

int main(void) {

	char man1[20];
	char man2[20];
	int spaceInx1, spaceInx2;

	printf("ù��° ��� �̸� ����: ");
	fgets(man1, sizeof(man1), stdin);
	man1[strlen(man1) - 1] = 0;	//������ �� ���� <- �ƽ�Ű�ڵ� �� 0

	printf("�ι�° ��� �̸� ����: ");
	fgets(man2, sizeof(man2), stdin);
	man2[strlen(man2) - 1] = 0;	//������ �� ���� <- �ƽ�Ű�ڵ� �� 0


	spaceInx1 =  findSpace(man1);
	spaceInx2 = findSpace(man2);

	if (CompName(man1, man2)) printf("�̸��� �����ϴ�.\n");
	else printf("�̸��� �ٸ��ϴ�.\n");

	if (CompAge(man1, man2)) printf("���̰� �����ϴ�.\n");
	else printf("���̰� �ٸ��ϴ�.\n");

	return 0;


}
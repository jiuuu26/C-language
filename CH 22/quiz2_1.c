#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee{
	char name[20];		//������ �̸�
	char regNum[20];	//�ֹι�ȣ
	int salary;			//�޿� ����	
};

int main(void) {
	
	int i;
	struct employee man[3];

	for (i = 0; i < 3; i++) {
		printf("������ �̸�: ");
		scanf("%s", &man[i].name);
		printf("�ֹι�ȣ: ");
		scanf("%s", &man[i].regNum);
		printf("�޿�����: ");
		scanf("%d", &man[i].salary);
	}

	for (i = 0; i < 3; i++) {
		printf("\n������ �̸�: %s\n",man[i].name);
		printf("�ֹι�ȣ: %s\n", man[i].regNum);
		printf("�޿�����: %d\n", man[i].salary);
	}
}
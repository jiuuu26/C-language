#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee {
	char name[20];		//������ �̸�
	char regNum[20];	//�ֹι�ȣ
	int salary;			//�޿� ����	
};

int main(void) {

	struct employee staff;

	printf("������ �̸�: ");
	fgets(staff.name, sizeof(staff.name), stdin);
	printf("�ֹι�ȣ: ");
	fgets(staff.regNum, sizeof(staff.regNum), stdin);
	printf("�޿� ����: ");
	scanf("%d", &staff.salary);

	printf("\%s%s%d", staff.name, staff.regNum, staff.salary);

}
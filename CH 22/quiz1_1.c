#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee {
	char name[20];		//종업원 이름
	char regNum[20];	//주민번호
	int salary;			//급여 정보	
};

int main(void) {

	struct employee staff;

	printf("종업원 이름: ");
	fgets(staff.name, sizeof(staff.name), stdin);
	printf("주민번호: ");
	fgets(staff.regNum, sizeof(staff.regNum), stdin);
	printf("급여 정보: ");
	scanf("%d", &staff.salary);

	printf("\%s%s%d", staff.name, staff.regNum, staff.salary);

}
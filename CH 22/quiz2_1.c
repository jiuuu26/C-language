#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee{
	char name[20];		//종업원 이름
	char regNum[20];	//주민번호
	int salary;			//급여 정보	
};

int main(void) {
	
	int i;
	struct employee man[3];

	for (i = 0; i < 3; i++) {
		printf("종업원 이름: ");
		scanf("%s", &man[i].name);
		printf("주민번호: ");
		scanf("%s", &man[i].regNum);
		printf("급여정보: ");
		scanf("%d", &man[i].salary);
	}

	for (i = 0; i < 3; i++) {
		printf("\n종업원 이름: %s\n",man[i].name);
		printf("주민번호: %s\n", man[i].regNum);
		printf("급여정보: %d\n", man[i].salary);
	}
}
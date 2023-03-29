#define CRT_SECURE_NO_WARNIGNS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(void) {
	
	int maxlen, reallen, i;
	scanf("%d", &maxlen);
	getchar();	
	char * str = (char*)malloc(sizeof(char) *( maxlen + 1));

	fgets(str, maxlen, stdin);
	str[strlen(str) - 1] = 0;	//\n문자 삭제
	reallen = strlen(str);

	int a=0; //fun game -> game fun
	for (i = reallen; i > 0; i--) {
		if (str[i] == ' ') {
			printf("%s ", &str[i+1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
	return 0;

}
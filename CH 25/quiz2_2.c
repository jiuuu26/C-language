#define CRT_SECURE_NO_WARNIGNS
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int len=5;
	int* n= (int*)malloc(sizeof(int)*len);
	int i = 0;
	while (1) {
		scanf("%d", &n[i]);
		if (n[i] == -1) break;
		i++;
		if (i >= len) {
			len += 3;
			n = (int*)realloc(n, sizeof(int) * len);
		}
	}
	for (i = 0; i < len-1; i++) {
		printf("%d ", n[i]);
	}

	free(n);

	return 0;

}
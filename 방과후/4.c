#include <stdio.h>
//문자 5개 입력
//제일 큰 문자 출력 함수


int main() {
	char sub(char*);
	char a[5];
	int i;
		printf("문자 5개 입력 : ");
		fflush(stdin);
		for(i=0; i<5; i++)
		scanf_s("%c", &a);

		sub(p);
	return 0;
}

char sub(char* p) {
	int i;
	char max = 0;
	for (i = 0; i < 5; i++) {
		if (max < p[i]);
		max = p[i];
	}

	return max;
}
